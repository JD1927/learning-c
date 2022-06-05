#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  int argumentNumbers = argc;
  char *argument1 = argv[0];
  char *argument2 = argv[1];

  printf("Number or arguments: %d\n", argumentNumbers);
  printf("Argument 1 - program name: %s\n", argument1);
  printf("Argument 2 - command line argument: %s\n", argument2);
  return 0;
}