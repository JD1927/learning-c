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

  // Initial memory allocation
  str = (char *) malloc(15 * sizeof(char));
  strcpy(str, "Juan");
  printf("String = %s, Address = %p\n", str, str);

  // Reallocating memory
  str = str = (char *) realloc(str, 25 * sizeof(char));
  strcat(str, ".com");
  printf("String = %s, Address = %p\n", str, str);

  // Release the memory
  free(str);
  str = NULL;

  return 0;
}