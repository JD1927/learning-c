/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  // Arithmetic Variables
  int a = 33;
  int b = 15;
  int result = 0;
  // Logical Variables
  bool first = true;
  bool second = true;
  bool logicResult;
  //
  // Arithmetic Operators
  result = a + b;
  // Logical Operators
  logicResult = (!first && second) || (first && !second);
  //
  printf("arithmetic result is %d\n", --a);

  printf("logical result is %d\n", logicResult);

  return 0;
}