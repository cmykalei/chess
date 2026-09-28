#ifndef PIECE_H
#define PIECE_H

/**
 * @file        board/piece.h
 * @brief       Chess pieces.
 * @details     Provides access to all chess pieces on the board.
 */

#define COLOR_WHITE "\033[38;2;255;255;255m"
#define COLOR_BLACK "\033[38;2;0;0;0m"

typedef enum piece_role {
     NO_PIECE, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING
} piece_enum;

typedef enum piece_color {
    NO_COLOR, WHITE, BLACK
} piece_color;

typedef struct piece_t {
    piece_role role;
    piece_color color;
} piece_t;

piece_t piece_init(piece_role role, piece_color color);

const char* piece_char(piece_t p);

const char* piece_symbol(piece_t p);

#endif /* PIECE_H */
