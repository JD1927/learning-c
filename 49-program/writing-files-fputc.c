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
  int ch;

  // Open file
  fp = fopen("my-file.txt", "w+");

  for (ch = 33; ch < 100; ++ch) {
    fputc(ch, fp);
  }

  fclose(fp);
  fp = NULL;

  return 0;
}