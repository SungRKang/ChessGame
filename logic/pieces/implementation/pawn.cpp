//implementation for pawn
#include <vector>
#include "../headers/pawn.h"
pawn::pawn(){}
pawn::pawn(position defaultPosition, pieces::pieceColor theColor){ //contructor for pawn
    setColor(theColor);
    setdefaultPosition(defaultPosition);
    setcurrentPosition(defaultPosition);
} 

void pawn::identifyPossiblePositions() {
    // a pawn moves forwards
    position tempPos;
    std::vector<position> posVec;
    tempPos.setRow(tempPos.getRow()+1);
    posVec.push_back(tempPos);
    // but captures diagonally
    tempPos = getCurrentPosition();
    tempPos.setRow(tempPos.getRow()+1);
    tempPos.setCol(static_cast<char>(tempPos.getCol()+1));
    posVec.push_back(tempPos);
    // first move: a pawn has the option to move 2 spaces on its first move
    tempPos=getCurrentPosition();
    tempPos.setRow(tempPos.getRow()+2);
    posVec.push_back(tempPos);
    // 
    setpossiblePositions(posVec);
}