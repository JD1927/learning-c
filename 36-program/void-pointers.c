/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

int main(int argc, char *argv[]) {
  int i = 10;
  float f = 2.34;
  char ch = 'k';

  void *vptr = NULL;

  vptr = &i;
  printf("Value of i = %d\n", *(int *)vptr); // Cast void to int pointer

  vptr = &f;
  printf("Value of f = %.2f\n", *(float *)vptr); // Cast void to float pointer

  vptr = &ch;
  printf("Value of ch = %c\n", *(char *)vptr); // Cast void to char pointer



  return 0;
}