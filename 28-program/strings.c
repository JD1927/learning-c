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
  char str[] = "My name is Juan";
  char temp[50];

  strncpy(temp, str, sizeof(temp) - 1);
  printf("%s\n", str);
  printf("%s\n", temp);
  printf("The length is: %ld\n", strlen(str));
  printf("The length is: %ld\n", strlen(temp));
  return 0;
}