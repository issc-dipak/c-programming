#include "Board.h"
#include "Queen.h"

int main()
{
    Board board;
    Queen queenSolver;

    if (queenSolver.solve(board, 0))
    {
        board.display();
    }
    else
    {
        std::cout << "No solution exists." << std::endl;
    }

    return 0;
}
