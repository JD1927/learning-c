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

int arraySum(int array[], const int n);

int main(int argc, char *argv[]) {
  int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };
  printf("The sum is %d\n", arraySum(values, 10));
  return 0;
}

int arraySum(int *array, const int n) {
  int sum = 0;
  int *const arrayEnd = array + n;
  for (; array < arrayEnd; ++array)
    sum += *array;

  return sum;
}