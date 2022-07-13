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
  FILE *fp1 = NULL, *fp2 = NULL;
  char ch = ' ';

  fp1 = fopen("file.txt", "r");

  if (fp1 == NULL) {
    perror("Error opening file");
    return -1;
  }
  fp2 = fopen("temp-file.txt", "w");
  if (fp1 == NULL) {
    perror("Error opening temp file");
    return -1;
  }
  while ((ch = (char)fgetc(fp1)) != EOF) {
    if (islower(ch)){
      ch = (char)toupper(ch);
    }
    fputc(ch, fp2);
  }

  fclose(fp1);
  fclose(fp2);


  // Rename temp file to file.txt
  rename("temp-file.txt", "file.txt");

  // Remove the temp file
  remove("temp-file.txt");

  fp1 = fopen("file.txt", "r");

  if (fp1 == NULL) {
    perror("Error opening file");
    return -1;
  }

  while ((ch = (char)fgetc(fp1)) != EOF) {
    printf("%c", ch);
  }

  fclose(fp1);
  fp1 = NULL;
  fp2 = NULL;

  return 0;
}