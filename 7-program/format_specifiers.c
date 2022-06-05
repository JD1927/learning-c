#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int integerVar = 100;
  float floatingVar = 331.79;
  float x = 3.99932323232;
  double doubleVar = 8.44e+11;
  char charVar = 'W';
  bool boolVar = false;
  printf("integerVar = %i asdasd %f\n", integerVar, floatingVar);
  printf("integerVar = %i\n", integerVar);
  printf("floating Var = %f\n", floatingVar);
  printf("doubleVar = %e\n", doubleVar);
  printf("doubleVar = %g\n", doubleVar);
  printf("charVar = %c\n", charVar);
  printf("boolVar = %i\n", boolVar);
  printf("%.5f", x);
  return 0;
}