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

void squareNumber(int * const n);

int main(int argc, char *argv[]) {
  int number = 0;
  printf("Calculate the squares of a number\n");

  // Read input
  printf("Enter a number: ");
  scanf("%d", &number);

  // Calculate square
  squareNumber(&number);
  // Print out the result
  printf("Result: %d\n", number);
  return 0;
}

void squareNumber(int * const n) {
  *n = (*n) * (*n);
}