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

int main(int argc, char *argv[]) {
  FILE *fp = NULL;
  int c;

  fp = fopen("my-file.txt", "r");

  if (fp == NULL) {
    perror("Error in opening file");
    return -1;
  }
  // Read a single char
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }
  fclose(fp);
  fp = NULL;

  return 0;
}