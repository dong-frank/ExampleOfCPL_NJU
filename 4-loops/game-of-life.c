//
// Created by Frank on 2023/10/20.
//
#include <stdio.h>
#include <synchapi.h>
#include <stdlib.h>

#define SIZE 6
const int board[SIZE][SIZE] = {
        {0},
        {0, 1, 1, 0, 0, 0},
        {0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0},
        {0, 0, 0, 1, 1, 0},
        {0}
};

int main(void) {
    int old_board[SIZE + 2][SIZE + 2] = {0};
    for (int row = 1; row <= SIZE; row++) {
        for (int col = 1; col <= SIZE; col++) {
            old_board[row][col] = board[row - 1][col - 1];
        }
    }
    for (int row = 1; row <= SIZE; row++) {
        for (int col = 1; col <= SIZE; col++) {
            printf("%c ", old_board[row][col] ? '*' : ' ');
        }
        printf("\n");
    }
    system("cls");
    //old_board = apply the rule > new_board
    int new_board[SIZE + 2][SIZE + 2] = {0};
    for (int i = 0; i < 10; i++) {
        for (int row = 1; row <= SIZE; row++) {
            for (int col = 1; col <= SIZE; col++) {
                //counting live cells in the neighbour board[i][j]
                int neighbors =
                        old_board[row - 1][col - 1] +
                        old_board[row - 1][col] +
                        old_board[row - 1][col + 1] +
                        old_board[row][col - 1] +
                        old_board[row][col + 1] +
                        old_board[row + 1][col - 1] +
                        old_board[row + 1][col] +
                        old_board[row + 1][col + 1];
                //apply the rule
                if (old_board[row][col]) {
                    new_board[row][col] = (neighbors == 2 || neighbors == 3);
                } else {
                    new_board[row][col] = (neighbors == 3);
                }
            }
        }

        for (int row = 1; row <= SIZE; row++) {
            for (int col = 1; col <= SIZE; col++) {
                printf("%c ", new_board[row][col] ? '*' : ' ');
            }
            printf("\n");
        }
        Sleep(1000);

        system("cls");
        for (int row = 1; row <= SIZE; row++) {
            for (int col = 1; col <= SIZE; col++) {
                old_board[row][col] = new_board[row][col];
            }
        }
    }
    return 0;
}