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
  char str[61];

  // Open file
  fp = fopen("my-file.txt", "r");

  if (fp == NULL) {
    perror("Error in opening file");
    return -1;
  }
  // Read a string
  if (fgets(str, 60, fp) != NULL) {
    // Writing content to stdout
    printf("%s", str);
  }

  fclose(fp);
  fp = NULL;

  return 0;
}