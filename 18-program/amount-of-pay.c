/*
  Author: Juan Aguirre
  Date:
  Purpose: program that calculates your weekly pay.
  - Basic pay rate = $12.00/hr
  - Overtime (in excess of 40 hours) = time and a half = $18.00
  - Tax rate
    - 15% of the first $300 - <= $300
    - 20% of the next $150 - <= $450
    - 25% of the rest - > $450
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BASIC_PAY 12.00
#define OVERTIME_PAY 18.00
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define OVER_TIME_HOURS 40

int main(int argc, char *argv[])
{
  // Variables
  double workedHours = 0;
  double totalPayBeforeTaxes = 0;
  double totalPayAfterTaxes = 0;
  double taxes = 0;

  // Read input
  printf("Enter the number of hours worked this week: \n");
  scanf("%lf", &workedHours);

  // Calculate pay before taxes
  if (workedHours <= OVER_TIME_HOURS) {
    totalPayBeforeTaxes = workedHours * BASIC_PAY;
  } else {
    double overTimePay = ((workedHours - OVER_TIME_HOURS) * OVERTIME_PAY);
    totalPayBeforeTaxes = (workedHours * BASIC_PAY) + overTimePay;
  }
  // Calculate taxes
  if (totalPayBeforeTaxes <= 300) {
    taxes = totalPayBeforeTaxes * TAX_RATE_1;
  } else if (totalPayBeforeTaxes <= 450) {
    taxes = 300 * TAX_RATE_1;
    taxes += (totalPayBeforeTaxes - 300) * TAX_RATE_2;
  } else {
    taxes = 300 * TAX_RATE_1;
    taxes += 150 * TAX_RATE_2;
    taxes += (totalPayBeforeTaxes - 450) * TAX_RATE_3;
  }

  totalPayAfterTaxes = totalPayBeforeTaxes - taxes;
  // Print output
  printf("Your pay before taxes is: $%.2f\n", totalPayBeforeTaxes);
  printf("Your taxes are: $%.2f\n", taxes);
  printf("Your pay after taxes is: $%.2f\n", totalPayAfterTaxes);

  return 0;
}