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
  int values[100];
  int *pValues = NULL;

  pValues = &values[0]; // Get the first element reference
  pValues = values; // Get the first element reference

  // values[i] and *(values+i) are equivalent in meaning
  // It is possible to navigate through an array with a pointer.

  // *(pValues + 3) = 1;
  *(pValues + 3) = 1;
  printf("%d\n", values[3]);
  values[10] = 27;
  printf("%d\n", values[10]);
  *(pValues + 10) = 69;
  printf("%d\n", values[10]);


  return 0;
}