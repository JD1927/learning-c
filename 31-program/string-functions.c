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
void reverseStringOrder(char str[]);
void sortStrings(char strings[][50], int numberOfStrings);

int main(int argc, char *argv[])
{
  char text[100];
  int numberOfStrings = 0;
  // Reverse order
  printf("1. Reverse string order \n\n");
  printf("Enter an interesting string of less than %d characters: \n", 100);
  scanf("%s", text);
  reverseStringOrder(text);
  printf("%s\n", text);

  // Sorting strings
  printf("\n2. Sorting strings \n\n");
  printf("Enter the number of strings: \n");
  scanf("%d", &numberOfStrings);
  char strings[numberOfStrings][50];
  for (int i = 0; i < numberOfStrings; ++i) {
    printf("Input string %d: \n", (i + 1));
    scanf("%s", strings[i]);
  }
  sortStrings(strings, numberOfStrings);
  printf("New order: \n");
  for (int i = 0; i < numberOfStrings; ++i) {
    printf("%s\n", strings[i]);
  }
  return 0;
}

void reverseStringOrder(char str[]) {
  int strLength = strlen(str);
  char tempStr[strLength];
  for (int i = 0; i < strLength; ++i) {
    tempStr[i] = str[i];
  }
  for (int i = strLength - 1, j = 0; i >= 0; --i, ++j) {
    str[j] = tempStr[i];
  }
}

void sortStrings(char strings[][50], int numberOfStrings) {
  for (int i = 0; i < numberOfStrings - 1; i++) {
    for (int j = 0; j < numberOfStrings - i - 1; j++) {
      if (strcmp(strings[j], strings[j+1]) > 0) {
        char temp[50];
        strcpy(temp, strings[j]);
        strcpy(strings[j], strings[j+1]);
        strcpy(strings[j+1], temp);
      }
    }
  }
}