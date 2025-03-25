#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board
{
private:
    static const int SIZE = 8;
    std::vector<std::vector<char>> grid;

public:
    Board();
    void placeQueen(int row, int col);
    void removeQueen(int row, int col);
    bool isSafe(int row, int col) const;
    void display() const;
};

#endif
