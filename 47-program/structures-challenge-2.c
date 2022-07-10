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
#define ITEM_NAME_LEN 20

struct item {
  char *itemName;
  int quantity;
  float price;
  float amount;
};


void readItem(struct item *item);
void printItem(struct item *item);

int main(int argc, char *argv[]) {
  struct item item, *pItem;
  pItem = &item;

  pItem->itemName = (char *) malloc(ITEM_NAME_LEN * sizeof(char));

  if (!pItem) {
    exit(-1);
  }

  readItem(pItem);
  printItem(pItem);
  free(pItem->itemName);
  return 0;
}

void readItem(struct item *item) {
  printf("Enter the item's name: \n");
  scanf("%s", item->itemName);

  printf("Enter the item's quantity: \n");
  scanf("%d", &item->quantity);

  printf("Enter the item's price: \n");
  scanf("%f", &item->price);

  item->amount = (float) item->quantity * item->price;
}

void printItem(struct item *item) {
  printf("Item's name: %s\n", item->itemName);
  printf("Item's quantity: %d\n", item->quantity);
  printf("Item's price: %.2f\n", item->price);
  printf("Item's amount: %.2f\n", item->amount);
}