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
  int lines = 0;
  char ch;

  fp = fopen("my-file.txt", "r");

  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }
  while ((ch = (char)fgetc(fp)) != EOF) {
    if (ch == '\n') {
      ++lines;
    }
  }
  // EOF
  ++lines;
  printf("Total lines of the file: %d\n", lines);
  fclose(fp);
  fp = NULL;

  return 0;
}