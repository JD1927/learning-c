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

  // Open file
  fp = fopen("my-file.txt", "w+");
  if (fp != NULL) {
    fprintf(fp, "%s %s %s %s %d", "Hello", "my", "dear", "number", 42);
  }

  fclose(fp);
  fp = NULL;

  return 0;
}