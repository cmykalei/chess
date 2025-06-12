/*
 * Square implementation.
 */
#include "square.h"


square_t square_init(square_shade shade, char file, int rank) {
    if (file < 'a' || file > 'h' || rank < 1 || rank > 8) {
        return (square_t){NO_SHADE, 0, 0};
    } else {
        square_t s = {shade, file, rank};
        return s;
    }
}