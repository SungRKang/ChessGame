//implementation for pawn

#include "pawn.h"
pawn::pawn(){}
pawn::pawn(position defaultPosition, pieceColor theColor){
    setColor(theColor);
    setdefaultPosition(defaultPosition);
} //contructor for pawn
        //So 
void identifyPossiblePositions();