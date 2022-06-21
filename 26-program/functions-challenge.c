/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void handleMenuOption(int *option);
void setGDCInput(int *x, int *y);
int greatestCommonDivisor(int x, int y);
bool hasValidInput(int x, int y);
float getSquareRoot(float x);
float getAbsoluteValue(float x);
void readNumber(float *number);


int main(int argc, char *argv[])
{
  int option = 0;
  int x = 0, y = 0;
  float number = 0;

  do {
    handleMenuOption(&option);
    switch (option) {
      case 1:
        printf("1. Greatest Common Divisor\n");
        setGDCInput(&x, &y);
        if (hasValidInput(x, y)) {
          printf("GCD(%d, %d) = %d\n", x, y, greatestCommonDivisor(x, y));
        } else {
          printf("Invalid input\n");
        }
        break;
      case 2:
        printf("2. Absolute value of a number\n");
        readNumber(&number);
        printf("| %.2f | = %.2f\n", number, getAbsoluteValue(number));
        break;
      case 3:
        printf("3. Square root of a number\n");
        readNumber(&number);
        printf("√(%.2f) = %.2f\n", number, getSquareRoot(number));
        break;
      default:
        break;
    }
  } while (option != 0);
  return 0;
}

void handleMenuOption(int *option) {
  printf("\nMENU\n");
  printf("1. Greatest Common Divisor\n");
  printf("2. Absolute value of a number\n");
  printf("3. Square root of a number\n");
  printf("0. Quit\n");
  printf("Please enter an option: ");
  scanf("%d", option);
}

void setGDCInput(int *x, int *y) {
  printf("Please enter two numbers:\n");
  printf("First number: ");
  scanf("%d", x);
  printf("\nSecond number: ");
  scanf("%d", y);
}

void readNumber(float *number) {
  printf("Enter a number: ");
  scanf("%f", number);
}

int greatestCommonDivisor(int x, int y) {
  while (x != y) {
    if (x > y) {
      x -= y;
    } else {
      y -= x;
    }
  }
  return x;
}

bool hasValidInput(int x, int y) {
  return x > 0 && y > 0 ? true : false;
}
float getSquareRoot(float x) {
  const float epsilon = 0.00001;
  float guess = 1.0;
  if (x < 0) {
    x = getAbsoluteValue(x);
    printf("You're kind of retarded, but I'll take it anyway.\n");
    return -guess;
  } else {
    while (getAbsoluteValue((guess * guess) - x) >= epsilon) {
      guess = ((x / guess) + guess) / 2.0;
    }
    return guess;
  }
}

float getAbsoluteValue(float x) {
  return x < 0 ? -x : x;
}



