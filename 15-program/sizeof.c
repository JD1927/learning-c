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
  printf("Size of short: %zd bytes \n", sizeof(short));
  printf("Size of char: %zd bytes \n", sizeof(char));
  printf("Size of int: %zd bytes \n", sizeof(int));
  printf("Size of float: %zd bytes \n", sizeof(float));
  printf("Size of long: %zd bytes \n", sizeof(long));
  printf("Size of long long: %zd bytes \n", sizeof(long long));
  printf("Size of double: %zd bytes \n", sizeof(double));
  printf("Size of long double: %zd bytes \n", sizeof(long double));

  return 0;
}