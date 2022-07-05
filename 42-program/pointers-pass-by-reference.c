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

void swap(int *x, int *y);

int main(int argc, char *argv[]) {
  int a = 100;
  int b = 200;

  printf("Before swap, value of a: %d\n", a);
  printf("Before swap, value of b: %d\n", b);

  // Calling a function to swap the values
  swap(&a, &b);

  printf("After swap, value of a: %d\n", a);
  printf("After swap, value of b: %d\n", b);

  return 0;
}

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

  return;
}