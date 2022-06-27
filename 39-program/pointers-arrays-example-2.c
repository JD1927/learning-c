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
  long multiple[] = {15L, 25L, 35L, 45L};
  long *p = multiple;

  printf("sizeof(multiple): %ld\n", sizeof(multiple));
  printf("sizeof(multiple[0]): %ld\n", sizeof(multiple[0]));
  for (int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); ++i) {
    printf("address p+%d (&multiple[%d]): %llu   *(p+%d) value: %ld\n", i, i, (unsigned long long)(p+i), i, *(p+i));
  }
  printf("\n Type long occupies: %d bytes\n", (int)sizeof(long));
  return 0;
}