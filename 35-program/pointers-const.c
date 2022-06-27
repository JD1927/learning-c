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
  // Pointers to constants
  long value = 999L;
  long number = 777L;
  const long *pValue = &value; // Defines a pointer to a constant
  // *pValue = 888L; // Error - attempt to change const location
  value = 888L;
  printf("value: %ld == *pValue: %ld\n", value, *pValue);
  pValue = &number; // OK - Changing the address in pValue
  printf("value: %ld != *pValue: %ld\n", value, *pValue);

  // Constants to pointers
  int count = 4;
  int item = 69;
  int *const pCount = &count; // Defines a constant pointer
  ++*pCount;
  *pCount = 69;
  // pCount = &item; // Error - attempt to change a constant pointer
  printf("count: %d == *pCount: %d\n", count, *pCount);
  // Summarizing
  // const int * ... - Value cannot be changed
  // int *const ... - Pointer address cannot change

  // Constant pointer to a constant - Everything is fixed.
  int item2 = 3;

  const int *const pItem2 = &item2;
  // pItem = &item3; // Error
  // *pItem = ++item; // Error
  ++item2; // OK
  printf("%d\n", item2);

  return 0;
}