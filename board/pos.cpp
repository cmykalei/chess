/*
 * Pos implementation.
 */
#include "pos.h"

const pos_t POS_INVALID = {
    .file = -1,
    .rank = -1,
};

const pos_t POS_CAPTURED = {
    .file = 0,
    .rank = 0,
};

pos_t pos_set(char file, int rank) {
    if (file == 0 && rank == 0) {
        return POS_CAPTURED;
    } else if (file < 'a' || file > 'h' || rank < 1 || rank > 8) {
        return POS_INVALID;
    } else {
        pos_t pos = {file, rank};
        return pos;
    }
}
