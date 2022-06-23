/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// Tokenizing
int main(int argc, char *argv[])
{
  char str[] = "Hello how are you - my name is - JD";
  const char s[] = "-";

  char *token;

  /* Get the first token */
  token = strtok(str, s);
  /* Walk through other tokens */
  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, s);
  }


  return 0;
}