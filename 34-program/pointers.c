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
  long num1 = 0L;
  long num2 = 0L;
  long *pNum = NULL;

  pNum = &num1; // Get address of num1
  *pNum = 2L; // Set num1 to 2
  ++num2;  // Increment num2
  num2 += *pNum; // Add num1 to num2

  pNum = &num2; // Get address of num2
  ++*pNum; // Increment num2 indirectly

  printf("num1 = %ld\nnum2 = %ld\n*pNum = %ld\n*pNum + num2 = %ld\n", num1, num2, *pNum, *pNum + num2);

  return 0;
}