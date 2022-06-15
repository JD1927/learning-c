/*
  Author: Juan Aguirre
  Date:
  Purpose: In this challenge,you are to create a C program that displays the byte size of basic data types supported in C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  printf("Size of short: %zd\n bytes", sizeof(short));
  printf("Size of char: %zd\n bytes", sizeof(char));
  printf("Size of int: %zd\n bytes", sizeof(int));
  printf("Size of float: %zd\n bytes", sizeof(float));
  printf("Size of long: %zd\n bytes", sizeof(long));
  printf("Size of long long: %zd\n bytes", sizeof(long long));
  printf("Size of double: %zd\n bytes", sizeof(double));
  printf("Size of long double: %zd\n bytes", sizeof(long double));

  return 0;
}