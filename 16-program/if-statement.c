/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  int number, remainder;
  printf("Enter your number to be tested:");
  scanf("%i", &number);
  remainder = number % 2;
  if (remainder == 0)
  {
    printf("The number is even.\n");
  }
  else
  {
    printf("The number is odd.\n");
  }
  return 0;
}