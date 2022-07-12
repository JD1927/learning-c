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
  fpos_t position;

  fp = fopen("my-file.txt", "w+");
  fgetpos(fp, &position);
  fputs("Hello dear!", fp);

  fsetpos(fp, &position);
  fputs("This is going to override previous content", fp);

  fclose(fp);
  return 0;
}