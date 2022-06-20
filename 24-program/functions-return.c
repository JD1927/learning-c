/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int multiplyTwoNumbers(int x, int y);

int main(int argc, char *argv[])
{
  int result = 0;
  result = multiplyTwoNumbers(10, 20);
  printf("result is %d\n", result);
  return 0;
}

int multiplyTwoNumbers(int x, int y) {
  int result = x * y;
  return result;
}