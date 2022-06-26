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
  int number = 69;
  int *pNumber = NULL;
  pNumber = &number;

  printf("Number's address: %p\n", &number);
  printf("Pointer's address: %p\n", (void*)&pNumber);
  printf("Pointer's value: %p\n", pNumber);
  printf("Pointer's value pointing to: %d\n", *pNumber);
  return 0;
}