/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define MONTHS 12
#define YEARS 5
#define MAX_TEMP 40.1

int main(int argc, char *argv[])
{
  time_t t;
  srand((unsigned) time(&t));
  float weather[YEARS][MONTHS] = {0};
  int years[YEARS] = {2010, 2011, 2012, 2013, 2014};
  float yearsAverage[YEARS] = {0};
  float yearlyAverage = 0;
  int months[MONTHS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  // Seed temperatures
  printf("\nTemperatures: \n");
  for (int i = 0; i < YEARS; i++) {
    for (int j = 0; j < MONTHS; j++) {
      float randomNumber = ((float)rand()/(float)(RAND_MAX)) * MAX_TEMP;
      weather[i][j] = randomNumber;
      printf("%2.1f ", weather[i][j]);
    }
    printf("\n");
  }
  // Average temperatures per year
  printf("\nAverage temperatures per year: \n");
  for (int i = 0; i < YEARS; i++) {
    float average = 0;
    for (int j = 0; j < MONTHS; j++) {
      average += weather[i][j];
    }
    average /= MONTHS;
    yearsAverage[i] = average;
    yearlyAverage += average;
    printf("%d - %2.1f \n", years[i], average);
  }
  // Yearly average temperature
  yearlyAverage /= YEARS;
  printf("\nThe yearly average is %2.1f\n", yearlyAverage);
  // Average temperatures per month
  printf("\nAverage temperatures per month: \n");
  for (int i = 0; i < MONTHS; i++) {
    float average = 0;
    for (int j = 0; j < YEARS; j++) {
      average += weather[j][i];
    }
    average /= YEARS;
    printf("%d - %2.1f \n", months[i], average);
  }
  return 0;
}