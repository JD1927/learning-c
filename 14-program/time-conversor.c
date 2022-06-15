/*
  Author: Juan Aguirre
  Date:
  Purpose: In this challenge,you are to create a C program that converts the number of minutes to days and years
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  // Variables
  float minutes = 0;
  float days = 0;
  float years = 0;
  float minutesArg = 0;

  // Validate input
  minutesArg = atof(argv[1]);
  if (minutesArg > 0)
  {
    minutes = minutesArg;
  }
  else
  {
    printf("Enter the number of minutes: \n");
    scanf("%f", &minutes);
  }

  // Calculate the number of days and years
  days = minutes / (60 * 24);
  years = days / 365;

  printf("Number of days: %.2f\n", days);
  printf("Number of years: %.2f\n", years);
  return 0;
}