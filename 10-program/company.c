/*
  Author: Juan Aguirre
  Purpose: This program prints out the area and perimeter of a rectangle.
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  // Enums
  enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
  // Variables
  enum Company company1 = XEROX;
  enum Company company2 = GOOGLE;
  enum Company company3 = EBAY;

  printf("Company 1: %d\n", company1);
  printf("Company 2: %d\n", company2);
  printf("Company 3: %d\n", company3);

  return 0;
}