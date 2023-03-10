//A class that represents the chess board
//Essentialy a matrix of pieces
//A chess board is 8x8

#include "piece.h"
#include "position.h"
#include <vector>

class board {
    private:
        std::vector<std::vector<piece>> theBoard;
    public:
        getBoard;
        setBoard;
        checkPosition; //checks if where the board thinks the piece is matches what the piece thinks the piece is. 
};