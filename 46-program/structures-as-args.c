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

struct Family {
  char name[20];
  int age;
  char father[20];
  char mother[20];
};

bool siblings(struct Family member1, struct Family member2);

int main(int argc, char *argv[]) {
  struct nameCt *name;
  getInfo(name);
  return 0;
}

bool siblings(struct Family member1, struct Family member2) {
  if (strcmp(member1.mother, member2.mother) == 0) {
    return true;
  } else {
    return false;
  }
}

bool pSiblings(struct Family const *pMember1, struct Family const *pMember2) {
  if (strcmp(pMember1->mother, pMember2->mother) == 0) {
    return true;
  } else {
    return false;
  }
}
