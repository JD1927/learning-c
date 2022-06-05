#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  enum gender { male, female };
  enum gender myGender;
  myGender = male;
  enum gender anotherGender = female;
  bool isMale = (myGender == anotherGender);

  char myChar = '\n';
  printf("%c", myChar);
  return 0;
}