/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char *argv[])
{
  // srand(time(NULL));
  // Variables
  time_t t;
  srand((unsigned) time(&t));
  int randomNumber = rand() % 21;
  int guessesCounter = 5;
  int guess = 0;
  // Prompt user to guess the number
  printf("\nThis is a Guessing Game\n");
  printf("\nI have chosen a number between 0 and 20 which you must guess\n");

  // Validate guess count and user guess
  while (guessesCounter > 0 && guess != randomNumber) {
    printf("\nYou have %d tr%s left\n", guessesCounter, guessesCounter == 1 ? "y" : "ies");
    printf("Enter a guess: ");
    scanf("%d", &guess);
    // Validate if the user introduce a wrong number. (0-20)
    if (guess < 0 || guess > 20) {
      printf("\nCongratulations. You're really STUPID at this game!\n\n");
      guessesCounter--;
      continue;
    }
    guessesCounter--;
    // Validate the guess number
    if (guess == randomNumber) {
      printf("Congratulations. You guessed it!\n");
    } else {
      printf("Sorry, %d is wrong. My number is %s than that.\n\n", guess, guess > randomNumber ? "less" : "more");
    }
  }
  // Print if the user could not guess the number
  if (guessesCounter == 0 && guess != randomNumber) {
    printf("The number was %d, DUMMY!\n", randomNumber);
  }

  return 0;
}