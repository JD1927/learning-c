/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  unsigned long long sum = 0LL; // Stores the sum of the integers
  unsigned int count = 0;       // The number of integers to be summed

  // Read the number of integers to be summed
  printf("Enter the number of integers you want to sum: \n");
  scanf("%u", &count);

  // Sum integers from 1 to count
  for (unsigned int i = 1; i <= count; i++) {
    sum += i;
  }
  printf("\nTotal of the first %u numbers is %llu\n", count, sum);
  return 0;
}