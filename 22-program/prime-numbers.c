/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUMBERS 100

int main(int argc, char *argv[])
{
  int array[NUMBERS] = {0};
  int primeNumbers[NUMBERS] = {0};
  // Seed array
  for (int i = 0; i < NUMBERS; i++) {
    array[i] = i + 1;
  }
  // Validate whether the number is prime or not
  for (int i = 0; i < NUMBERS; i++) {
    int counter = 0;
    int currentNumber = array[i];
    for (int j = 0; j <= i; j++) {
      int validationNumber = array[j];
      if (currentNumber == 1 || currentNumber == 2) {
        counter = 2;
        break;
      } else if (currentNumber % validationNumber == 0) {
        counter++;
      }
    }
    if (counter == 2) {
      primeNumbers[i] = currentNumber;
    } else {
      primeNumbers[i] = 0;
    }
  }
  // Print the prime numbers
  printf("\nPrime numbers: \n");
  for (int i = 0; i < NUMBERS; i++) {
    if (primeNumbers[i] != 0) {
      printf("%2d ", primeNumbers[i]);
    }
  }
  return 0;
}