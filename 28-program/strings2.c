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
  char src[50], dest[50];

  strcpy(src, "This is source");
  strcpy(dest, "This is destination");

  strncat(dest, src, 15);

  printf("Final destination string : |%s|", dest);

  return 0;
}