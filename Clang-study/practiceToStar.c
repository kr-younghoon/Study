#include <stdio.h>

int main() {
  int line;
  int star;
  int star2;
  int space;
  int i;

  line = 5;

  for (i = 0; i < line; i++) {
    for (space = 0; space <= i; space++) {
      printf(" ");
    }
    for (star = i; star < line; star++) {
      printf("*");
    }
    for (star2 = 1; star2 <= i; star2++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}