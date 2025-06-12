#ifndef POS_H
#define POS_H

/**
 * @file        board/pos.h
 * @brief       Positions for each piece on the board.
 * @details     State of each piece described in FEN as a position.
 */

typedef struct pos_t {
    char file;  /* a to h */
    int rank;   /* 1 to 8 */
} pos_t;

extern const pos_t POS_INVALID;
extern const pos_t POS_CAPTURED;

extern pos_t pos_set(char file, int rank);

#endif /* POS_H */
