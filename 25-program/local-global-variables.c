/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int myGlobal = 0; // global variable

int main(int argc, char *argv[])
{
  int myLocal = 0; // local variable
  return 0;
}

void myFunction() {
  int x; // local variable
  // can access myGlobal and x, cannot access myLocal
}
