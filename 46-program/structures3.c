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

struct names {
  char first[20];
  char last[20];
};

struct pNames {
  char *first;
  char *last;
};

int main(int argc, char *argv[]) {
  struct names veep = { "Talia", "Summers" };
  struct pNames treas = { "Brad", "Fallingjaw" };

  printf("%s and %s\n", veep.first, treas.first);

  return 0;
}