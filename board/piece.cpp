/*
 * Piece implementation.
 */
#include "piece.h"

piece_t piece_init(piece_role role, piece_color color) {
    if (role < PAWN || role > KING || (color != WHITE && color != BLACK)) {
        return (piece_t){NO_PIECE, NO_COLOR};
    } else {
        piece_t p = {role, color};
        return p;
    }
}

/* Return char for piece p */
const char* piece_char(piece_t p) {
    if (p.color == WHITE) {
        switch (p.role) {
            case PAWN:   return "P";
            case KNIGHT: return "K";
            case BISHOP: return "B";
            case ROOK:   return "R";
            case QUEEN:  return "Q";
            case KING:   return "K";
            default:     return ".";
        }
    } else if (p.color == BLACK) {
        switch (p.role) {
            case PAWN:   return "p";
            case KNIGHT: return "k";
            case BISHOP: return "b";
            case ROOK:   return "r";
            case QUEEN:  return "q";
            case KING:   return "k";
            default:     return ".";
        }
    }
    return " ";
}


/* Return Unicode chess symbol for piece p */
const char* piece_symbol(piece_t p) {
    if (p.color == WHITE) {
        switch (p.role) {
            case PAWN:   return "♙";
            case KNIGHT: return "♘";
            case BISHOP: return "♗";
            case ROOK:   return "♖";
            case QUEEN:  return "♕";
            case KING:   return "♔";
            default:     return " ";
        }
    } else if (p.color == BLACK) {
        switch (p.role) {
            case PAWN:   return "♟";
            case KNIGHT: return "♞";
            case BISHOP: return "♝";
            case ROOK:   return "♜";
            case QUEEN:  return "♛";
            case KING:   return "♚";
            default:     return " ";
        }
    }
    return " ";
}
