#include <iostream>
using namespace std;

/**
 * @file        main.cpp
 * @brief       Entry point to the program for chess game.
 */
#include "board/board.h"

int main(void) {
    board_init();
    board_print();
    return 0;
}
