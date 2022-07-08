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
  int *pNumber1 = (int*)malloc(100); // Assumes that type int requires 4 bytes
  int *pNumber2 = (int*)malloc(25 * sizeof(int)); // Removes that assumption that ints are 4 bytes
  printf("%p\n", pNumber1);
  printf("%p\n", pNumber2);
  /* The argument to malloc() above is clearly indicating that sufficient bytes for 25 values of type int should be made available */
  /* Also the cast */
  /* Check for null immediately */
  if (!pNumber1 || !pNumber2) {
    // Code to deal with memory allocation failure...
  }
  free(pNumber1);
  pNumber1 = NULL;
  free(pNumber2);
  pNumber2 = NULL;
  return 0;
}