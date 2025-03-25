#include "Queen.h"

bool Queen::solve(Board &board, int col)
{
    if (col >= 8)
        return true;

    for (int row = 0; row < 8; row++)
    {
        if (board.isSafe(row, col))
        {
            board.placeQueen(row, col);

            if (solve(board, col + 1))
                return true;

            board.removeQueen(row, col);
        }
    }
    return false;
}
