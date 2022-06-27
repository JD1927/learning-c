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

  return 0;
}