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

  fputs("This is JD.\n", fp);
  fputs("I'm glad you're ok", fp);


  fclose(fp);
  fp = NULL;

  return 0;
}