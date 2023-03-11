//A class that represents the chess board
//Essentialy a matrix of pieces
//A chess board is 8x8
#ifndef BOARD_H
#define BOARD_H
#include "piece.h"
#include "position/position.h"
#include <vector>

class board {
    private:
        std::vector<std::vector<piece>> theBoard;
    public:
        std::vector<std::vector<piece>> getBoard();
        void setBoard(std::vector<std::vector<piece>> aBoard);
        void addPiece(piece aPiece, position aPosition);
};

#endif