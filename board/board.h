#ifndef BOARD_H
#define BOARD_H

/**
 * @file        board/piece.h
 * @brief       Chess pieces.
 * @details     Provides access to all chess pieces on the board.
 */
#include <iostream>
#include "piece.h"
#include "pos.h"
#include "square.h"

typedef struct board_cell_t {
    square_t square;
    piece_t piece;
} board_cell_t;

extern board_cell_t board[9][9];

void board_init(void);

void board_print(void);

#endif /* BOARD_H */
