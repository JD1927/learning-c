/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Functions
int getStringLength(char text[]);
void concatStrings(char str1[], char str2[], char result[]);
bool hasSameString(char str1[], char str2[]);

int main(int argc, char *argv[])
{
  char text[] = "Hello, this is my function.";
  char str1[] = "Hello, this is my first string.";
  char str2[] = "Hello, this is my second string.";
  int sizeOfStr1 = getStringLength(str1);
  int sizeOfStr2 = getStringLength(str2);
  char result[sizeOfStr1+sizeOfStr2];


  // String length
  printf("The length of the string: %s is %d\n", text, getStringLength(text));

  // Concat strings
  concatStrings(str1, str2, result);
  printf("%s\n", result);
  // Same strings
  printf("Los 2 strings %s iguales.\n", hasSameString(str1, str1) ? "son" : "no son");
  printf("Los 2 strings %s iguales.\n", hasSameString(str1, str2) ? "son" : "no son");
  return 0;
}

int getStringLength(char text[]) {
  int counter = 0;
  while (text[counter] != '\0')
    ++counter;
  return counter;
}

void concatStrings(char str1[], char str2[], char result[]) {
  int sizeOfStr1 = getStringLength(str1);
  int sizeOfStr2 = getStringLength(str2);
  int counter = 0;
  // Set first string
  for (int i = 0; i < sizeOfStr1; ++i, ++counter)
    result[counter] = str1[i];
  // Set second string
  for (int i = 0; i < sizeOfStr2; ++i, ++counter)
    result[counter] = str2[i];
}

bool hasSameString(char str1[], char str2[]) {
  bool result = false;
  int sizeOfStr1 = getStringLength(str1);
  int sizeOfStr2 = getStringLength(str2);

  if (sizeOfStr1 == sizeOfStr2) {
    result = true;
    for (int i = 0; i < sizeOfStr1; ++i) {
      if (str1[i] != str2[i]) {
        result = false;
        break;
      }
    }
  }
  return result;
}