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

struct employee {
  char name[50];
  char hireDate[15];
  float salary;
};

void printEmployeeInfo(struct employee const employee);

int main(int argc, char *argv[]) {
  struct employee employee1 = { "Juan", "20/01/2021", 50000.0f };
  struct employee employee2;

  // Print employee 1
  printEmployeeInfo(employee1);
  // Read input
  printf("Enter the name of the employee #2: \n");
  scanf("%s", employee2.name);
  printf("Enter the hire date of the employee #2 (dd/MM/YYYY): \n");
  scanf("%s", employee2.hireDate);
  printf("Enter the salary of the employee #2: \n");
  scanf("%f", &employee2.salary);


  // Print employee 2
  printEmployeeInfo(employee2);
  return 0;
}

void printEmployeeInfo(struct employee employee) {
  printf("Name: %s \n", employee.name);
  printf("Hire date: %s \n", employee.hireDate);
  printf("Salary: %.2f \n", employee.salary);
}