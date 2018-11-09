#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 4

/*~~~~~~~~~STRUCTURE DECLARATIONS~~~~~~~~~~~~~*/
struct board {
   int current_board[ROWS][COLS];
   int parent_ID;
};
typedef struct board Board;
/*~~~~~~~~~~~FUNCTION DECLARATIONS~~~~~~~~~~~~~~~~*/
void initialise_board(Board *init_board);
void print_board(Board *board);


int main(int argc, char const *argv[]) {
   /*array of type Board*/
    Board board_array[10];

   initialise_board(&board_array[0]);
   print_board(&board_array[0]);

   return 0;
}

void initialise_board(Board *init_board) {
   int i,j;

   for (i = 0; i < ROWS; i++) {
      for (j = 0; j < COLS; j++) {
         if (i < ROWS / 2) {
            init_board->current_board[i][j] = 0;
         }
         else {
            init_board->current_board[i][j] = 1;
         }
      }
   }
}

void print_board(Board *board) {
   int i,j;
   for (i = 0; i < ROWS; i++) {
      for (j = 0; j < COLS; j++) {
         printf("%d ", board->current_board[i][j]);
      }
      printf("\n");
   }
}
