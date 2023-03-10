#include "logic/pieces/headers/king.h"
#include "logic/pieces/headers/piece.h"

king::king(){}; //default constructor
king::king(pieceColor color){
    setColor(color);
    position aPos;
    if (color == white) {
        aPos.setCol('E');
        aPos.setRow(1);
        setdefaultPosition(aPos);
    }
    if (color == black) {
        aPos.setCol('E');
        aPos.setRow(8);
        setdefaultPosition(aPos);
    } 
} 
void king::identifyPossiblePositions(){
    // king can move forward 1 square
    position tempPos;
    std::vector<position> posVec;
    tempPos.setRow(tempPos.getRow()+1);
    posVec.push_back(tempPos);
    // king can move one right
    tempPos = getCurrentPosition();
    tempPos.setRow(tempPos.getRow()+1);
    tempPos.setCol(static_cast<char>(tempPos.getCol()+1));
    posVec.push_back(tempPos);
    // king can move one left
    tempPos=getCurrentPosition();
    tempPos.setCol(static_cast<char>(tempPos.getCol()-1));
    posVec.push_back(tempPos);
    // king can move one back
    // king can move one fwd right
    
    //king can move one fwd left
    //king can move one bck right
    //king can move one bck left
    setpossiblePositions(posVec);
}