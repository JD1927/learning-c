/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void multiplyTwoNumbers(int x, int y);

int main(int argc, char *argv[])
{
  multiplyTwoNumbers(10, 20);
  multiplyTwoNumbers(20, 30);
  multiplyTwoNumbers(50, 2);

  return 0;
}

void multiplyTwoNumbers(int x, int y) {
  int result = x * y;
  printf("The product of %d multiplied by %d is %d\n", x, y, result);
}