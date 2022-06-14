/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  unsigned int a = 60; // 60 = 0011 1100
  unsigned int b = 13; // 13 = 0000 1101
  int result = 0;

  result = a >> 2;
  // a >> 2 - 15 = 0000 1111
  // a << 2 - 240 = 1111 0000
  // a & b - 12 = 0000 1100
  // a | b - 61 = 0011 1101
  // a ^ b - 49 = 0011 0001
  printf("result is %d\n", result);
  return 0;
}