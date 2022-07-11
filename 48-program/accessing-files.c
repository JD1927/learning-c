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
  FILE *pFile = NULL;
  char *filename = "my-file.txt";
  pFile = fopen(filename, "w"); // Open my-file.txt to write it
  if (pFile != NULL) {
    printf("Failed to open %s\n", filename);
  }
  fclose(pFile);
  pFile = NULL;
  // rename()
  // remove()

  return 0;
}