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

struct date {
  int month;
  int day;
  int year;
};

int main(int argc, char *argv[]) {
  struct date today, *datePtr;
  datePtr = &today;

  datePtr->month = 9;
  datePtr->day = 25;
  datePtr->year = 2015;

  printf("Today's date is %i/%i/%.2i\n", datePtr->month, datePtr->day, datePtr->year % 100);

  return 0;
}