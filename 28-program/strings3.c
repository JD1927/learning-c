/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[])
{
  printf("strcmp(\"A\", \"A\") is ");
  printf("%d\n", strcmp("A", "A"));

  printf("strcmp(\"A\", \"B\") is ");
  printf("%d\n", strcmp("A", "B"));

  printf("strcmp(\"B\", \"A\") is ");
  printf("%d\n", strcmp("B", "A"));

  printf("strcmp(\"C\", \"A\") is ");
  printf("%d\n", strcmp("C", "A"));

  printf("strcmp(\"Z\", \"a\") is ");
  printf("%d\n", strcmp("Z", "a"));

  printf("strcmp(\"apples\", \"apple\") is ");
  printf("%d\n", strcmp("apples", "apple"));


  return 0;
}