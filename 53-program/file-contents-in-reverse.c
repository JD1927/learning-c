/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>
#define FILENAME "file.txt"

int main(int argc, char *argv[]) {
  FILE *fp = NULL;
  char ch = ' ';
  int len;

  // Read file
  fp = fopen(FILENAME, "r");

  // Validate if exists
  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }

  // Go to the end of the file
  fseek(fp, 0, SEEK_END);
  // Get current position
  len = ftell(fp);

  for (int i = 0; i < len; i++) {
    fseek(fp, -i, SEEK_END);
    printf("%c", (char)fgetc(fp));
  }
  printf("\n");

  fclose(fp);
  fp = NULL;

  return 0;
}