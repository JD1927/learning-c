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
  // Variables
  double width = 0;
  double height = 0;
  double area = 0;
  double perimeter = 0;

  double widthArg = 0, heightArg = 0;

  if (widthArg > 0 && heightArg > 0)
  {
    // Convert args to doubles
    widthArg = atof(argv[1]);
    heightArg = atof(argv[2]);
    width = widthArg;
    height = heightArg;
  }
  else
  {
    // Input
    printf("Enter the width of the rectangle: \n");
    scanf("%lf", &width);
    printf("Enter the height of the rectangle: \n");
    scanf("%lf", &height);
  }

  if (width == 0  || height == 0) {
    printf("You S T U P I D peace of sh*t.\n");
    return 1;
  }
  // Calcs
  area = width * height;
  perimeter = 2 * (width + height);

  // Output
  printf("The rectangle's width is: %.2f\n", width);
  printf("The rectangle's height is: %.2f\n", height);
  printf("The rectangle's area is: %.2f\n", area);
  printf("The rectangle's perimeter is: %.2f\n", perimeter);

  return 0;
}