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

struct nameCt {
  char *fName;
  char *lName;
  int letters;
};

void getInfo(struct nameCt * pst);

int main(int argc, char *argv[]) {
  struct nameCt *name;
  getInfo(name);
  return 0;
}

void getInfo(struct nameCt *pst) {
  char temp[20];
  printf("Please enter your first name.\n");
  scanf("%s", temp);

  // Allocate memory to hold name
  pst->fName = (char *) malloc(strlen(temp) + 1);

  // Copy name to allocated memory
  strcpy(pst->fName, temp);
  printf("Please enter your last name.\n");
  scanf("%s", temp);
  pst->lName = (char *) malloc(strlen(temp) + 1);
  strcpy(pst->lName, temp);
}