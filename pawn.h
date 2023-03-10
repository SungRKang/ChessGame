// this class represents the pawn
#ifndef PAWN_H
#define PAWN_H

#include "position.h"
#include "piece.h"
#include "position.h"
class pawn: public piece {
    
    public:
        pawn(); //default constructor
        pawn(position defaultPosition, pieceColor color); //contructor for pawn
        //So 
        void identifyPossiblePositions();
};

#endif