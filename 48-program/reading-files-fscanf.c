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
  char str1[10], str2[10], str3[10];
  int year;

  // Open file
  fp = fopen("my-file.txt", "w+");

  if (fp != NULL) {
    fputs("Hello, how are you?", fp);
  }
  rewind(fp);
  // Read with fscanf
  fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

  printf("Read String1 |%s|\n", str1);
  printf("Read String2 |%s|\n", str2);
  printf("Read String3 |%s|\n", str3);
  printf("Read Integer |%d|\n", year);

  fclose(fp);
  fp = NULL;

  return 0;
}