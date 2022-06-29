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

int getStringLength(const char *str);

int main(int argc, char *argv[]) {
  const char *str = "I love you";
  printf("\"%s\" has a length of: %d \n", str, getStringLength(str));
  return 0;
}

int getStringLength(const char *str) {
  int counter = 0;
  while (*str) {
    ++str;
    ++counter;
  }
  return counter;
}
