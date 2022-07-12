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
  int len;

  fp = fopen("my-file.txt", "r");

  if (fp == NULL) {
    perror("Error opening file");
    return -1;
  }

  fseek(fp, 0, SEEK_END);

  len = ftell(fp);
  fclose(fp);
  fp = NULL;

  printf("Total size of file.txt = %d bytes\n", len);

  return 0;
}