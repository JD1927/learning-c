/*
  Author: Juan Aguirre
  Date:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TIC_TAC_TOE_SIZE 10
// Global variables
char playerX = 'X';
char playerO = 'O';
bool hasWinner = false;
bool hasError = false;
// Function prototypes
void drawBoard(char board[TIC_TAC_TOE_SIZE]);
char getPlayer(int turn);
void markBoard(char board[TIC_TAC_TOE_SIZE], int position, char player);
bool checkWinner(char board[TIC_TAC_TOE_SIZE]);
bool hasValidPosition(char board[TIC_TAC_TOE_SIZE], int position);

int main(int argc, char *argv[])
{
  // Local variables
  char board[TIC_TAC_TOE_SIZE] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int turn = 1;
  int position = 0;

  char currentPlayer = ' ';
  // Main program
  printf("| Welcome to Tic Tac Toe! |\n");
  printf("* Player 1 - %c\n", playerX);
  printf("* Player 2 - %c\n", playerO);

  while (!hasWinner && turn < TIC_TAC_TOE_SIZE) {
    currentPlayer = getPlayer(turn);
    if (!hasError) {
      drawBoard(board);
    }
    printf("\nTURN %d - Player%c\n", turn, currentPlayer);

    printf("Please enter a position (1-9): ");
    scanf("%d", &position);

    if (hasValidPosition(board, position)) {
      markBoard(board, position, currentPlayer);
      turn++;
      hasWinner = checkWinner(board);
      hasError = false;
    } else{
      hasError = true;
    }
  }

  if (hasWinner) {
    drawBoard(board);
    printf("\n[WINNER]: Congratulations Player%c!\n", currentPlayer);
  }
  return 0;
}

void drawBoard(char board[TIC_TAC_TOE_SIZE]) {
  system("clear");
  printf("\nBOARD\n");
  for (int i = 1; i < TIC_TAC_TOE_SIZE; i++) {
    if (i == 2 || i == 5 || i == 8) {
      printf("| %c |", board[i]);
    } else {
      printf(" %c ", board[i]);
    }
    if (i % 3 == 0) {
      printf("\n");
      printf("-----------\n");
    }
  }
}

char getPlayer(int turn) {
  return turn % 2 != 0 ? playerX : playerO;
}

void markBoard(char board[TIC_TAC_TOE_SIZE], int position, char player) {
  board[position] = player;
}

bool checkWinner(char board[TIC_TAC_TOE_SIZE]) {
  // Check rows
  for (int i = 1; i <= TIC_TAC_TOE_SIZE; i += 3) {
    if (board[i] == board[i + 1] && board[i + 1] == board[i + 2]) {
      return true;
    }
  }
  // Check columns
  for (int i = 1; i <= TIC_TAC_TOE_SIZE; i++) {
    if (board[i] == board[i + 3] && board[i + 3] == board[i + 6]) {
      return true;
    }
  }
  // Check diagonals
  if (board[1] == board[5] && board[5] == board[9]) {
    return true;
  }
  if (board[3] == board[5] && board[5] == board[7]) {
    return true;
  }
  return false;
}

bool hasValidPosition(char board[TIC_TAC_TOE_SIZE], int position) {
  if (position < 1 || position > 9) {
    printf("\n[ERROR]: Invalid position: %d\n", position);
    return false;
  } else if (board[position] == playerX || board[position] == playerO) {
    printf("\n[ERROR]: Position %d already taken\n", position);
    return false;
  }
  return true;
}