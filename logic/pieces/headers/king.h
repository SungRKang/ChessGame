#ifndef KING_H
#define KING_H

#include "logic/position.h"
#include "piece.h"

class king : public piece {
    private:
        bool inCheck; //flag to see if the king is in check
    public:
        king(); //default constructor
        king(pieceColor color); //contructor for pawn
        void identifyPossiblePositions();
};

#endif
