/*
 * Board implementation.
 */
#include "board.h"

board_cell_t board[9][9];

void board_init(void) {
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            char file = 'a' + col;
            int rank = row + 1;
            int index = rank + col + 1;
            square_shade shade = (index % 2 == 0) ? LIGHT : DARK;

            square_t s = square_init(shade, file, rank);
            piece_t p = piece_init(NO_PIECE, NO_COLOR);

            board[rank][col + 1].square = s;
            board[rank][col + 1].piece = p;
        }
    }
     for (int c = 1; c <= 8; c++) {
        board[2][c].piece = piece_init(PAWN, WHITE);
        board[7][c].piece = piece_init(PAWN, BLACK);
    }
    // Rooks
    board[1][1].piece = piece_init(ROOK, WHITE);
    board[1][8].piece = piece_init(ROOK, WHITE);
    board[8][1].piece = piece_init(ROOK, BLACK);
    board[8][8].piece = piece_init(ROOK, BLACK);
    // Knights
    board[1][2].piece = piece_init(KNIGHT, WHITE);
    board[1][7].piece = piece_init(KNIGHT, WHITE);
    board[8][2].piece = piece_init(KNIGHT, BLACK);
    board[8][7].piece = piece_init(KNIGHT, BLACK);
    // Bishops
    board[1][3].piece = piece_init(BISHOP, WHITE);
    board[1][6].piece = piece_init(BISHOP, WHITE);
    board[8][3].piece = piece_init(BISHOP, BLACK);
    board[8][6].piece = piece_init(BISHOP, BLACK);
    // Queens
    board[1][4].piece = piece_init(QUEEN, WHITE);
    board[8][4].piece = piece_init(QUEEN, BLACK);
    // Kings
    board[1][5].piece = piece_init(KING, WHITE);
    board[8][5].piece = piece_init(KING, BLACK);
}

void board_print(void) {
    for (int row = 8; row >= 0; row--) {
        if (row == 0) {
            printf("   ");
            for (int col = 1; col <= 8; col++) {
                printf(" %c ", 'a' + col - 1);
            }
        } else {
            printf(" %d ", row);
            for (int col = 1; col <= 8; col++) {
                square_shade shade = board[row][col].square.shade;
                const char* sym = piece_symbol(board[row][col].piece);
                const char* fg = (board[row][col].piece.color == BLACK) ? COLOR_WHITE_FG : COLOR_BLACK_FG;
                if (!sym) sym = " ";
                if (shade == LIGHT) {
                    printf("%s%s %s %s", COLOR_LIGHT_BG, fg, sym, COLOR_RESET);
                } else {
                    printf("%s%s %s %s", COLOR_DARK_BG, fg, sym, COLOR_RESET);
                }
            }
        }
        printf("\n");
    }
}
