#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char player1, char player2) {
  if (player1 == 'r') {
    if (player2 == 's') {
      return -1;
    }
    if (player2 == 'p') {
      return 1;
    }
    if (player2 == 'r') {
      return 0;
    }
  }
  if (player1 == 's') {
    if (player2 == 's') {
      return 0;
    }
    if (player2 == 'p') {
      return 1;
    }
    if (player2 == 'r') {
      return -1;
    }
  }

  if (player1 == 'p') {
    if (player2 == 's') {
      return -1;
    }
    if (player2 == 'p') {
      return 0;
    }
    if (player2 == 'r') {
      return 1;
    }
  }
  return -9;
}
int main(void) {
  char computer;
  srand(time(NULL));
  int r = rand() % 100;

  if (r < 33) {
    computer = 'r';
  } else if (r >= 33 && r <= 66) {
    computer = 'p';
  } else {
    computer = 's';
  }

  printf("please chose s, p , s -> ");
  char player;
  scanf("%c", &player);

  int result = game(computer, player);

  if (result == -1) {
    printf("computer won! better luck next time!");
  } else if (result == 1) {
    printf("human won! yay!!");
  } else if (result == 0) {
    printf("its a draw\n");
  } else {
    printf("couldn't determine the result!");
  }

  return 0;
}
