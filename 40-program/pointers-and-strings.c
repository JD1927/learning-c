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

void copyString(char *to, char *from);

int main(int argc, char *argv[]) {
  char *str1 = "Hello";
  char str2[50];

  copyString(str2, str1);
  printf("%s\n", str2);

  return 0;
}

void copyString(char *to, char *from) {
  // Null character is equal to the value 0, so will jump out then
  while (*from)
    *to++ = *from++;
  // The following code is a more detailed implementation of the above
  /*
  while (*from) {
    *to = *from;
    ++to;
    ++from;
  }
  */
  *to = '\0';
}
