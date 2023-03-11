// this class represents the pawn
#ifndef PAWN_H
#define PAWN_H

#include "position.h"
#include "piece.h"
class pawn: public piece {
    
    public:
        pawn(); //default constructor
        pawn(position defaultPosition, pieces::pieceColor color); //contructor for pawn
        void identifyPossiblePositions();
};

#endif