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

  fp = fopen("my-file.txt", "w+");
  fputs("This is JD", fp);

  fseek(fp, 7, SEEK_SET);
  fputs("Hello, how are you?", fp);

  fclose(fp);
  return 0;
}