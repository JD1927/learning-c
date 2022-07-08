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
  char *str = NULL;
  int strSize = 0;
  // Read string size
  printf("Enter the number of characters allowed: \n");
  scanf("%d", &strSize);
  // Read string
  str = (char *) malloc(strSize * sizeof(char));
  if (str != NULL) {
    printf("Enter the string then: \n");
    scanf(" ");
    fgets(str, strSize, stdin);
    printf("Result: %s\n", str);
  }

  // Release the memory
  free(str);
  str = NULL;
  return 0;
}