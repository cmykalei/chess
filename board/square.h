#ifndef SQUARE_H
#define SQUARE_H

/**
 * @file        board/square.h
 * @brief       Square on the chess board.
 * @details     Describes the state of a square for chess pieces.
 */
#define COLOR_RESET      "\x1b[0m"
#define COLOR_LIGHT_BG   "\x1b[48;5;254m"  /* lighter dim gray background */
#define COLOR_DARK_BG    "\x1b[48;5;240m"  /* darker dim gray background */
#define COLOR_WHITE_FG   "\x1b[38;5;15m"   /* bright white fg */
#define COLOR_BLACK_FG   "\x1b[38;5;0m"    /* pure black fg */

typedef enum square_shade {
    NO_SHADE, LIGHT, DARK
} square_shade;

typedef struct square_t {
    square_shade shade;
    char file;
    int rank;
} square_t;

square_t square_init(square_shade shade, char file, int rank);

#endif /* SQUARE_H */
