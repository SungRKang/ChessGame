#include "piece.h"
#include <string>
#include <vector>
#include <algorithm>

//implementation file for the piece class

piece::piece(std::string theType) {
    type = theType;
    identifyPossiblePositions();
}

std::string piece::getType(){
    return type;
}
position piece::getCurrentPosition() {
    return currentPosition;
}
position piece::getDefaultPosition(){
    return defaultPosition;
}
std::vector<position> piece::getpossiblePositions()
{
    return possiblePositions;
}
bool piece::getFirstMove(){
    return firstMove;
}
void piece::setFirstMove(bool flag){
    firstMove = flag;
}
void piece::setType(std::string theType){
    type = theType;
}
void piece::setcurrentPosition(position theCurrentPosition){
    currentPosition = theCurrentPosition;
}
void piece::setdefaultPosition(position theDefaultPosition){
    defaultPosition = theDefaultPosition;
}
void piece::setpossiblePositions(std::vector<position> thePossiblePositions) {
    possiblePositions = thePossiblePositions;
}

// a function that changes the position of the piece upon checking the validity of the move
// returns TRUE if the move was completed and FALSE if the move was not possible
bool piece::movePiece(position desiredPosition) {
    identifyPossiblePositions(); //update the possible positions
    if (std::find(possiblePositions.begin(), possiblePositions.end(), desiredPosition) != possiblePositions.end()) {
        //checks if the desiredposition is in the possible positions
        //and if so update the current position of the piece
        currentPosition = desiredPosition;
        return true;
    } else {
        return false;
    }
}
// a function that identifies the possible positions that a piece can move to and updates the possiblePositions vector
// does not check for gamestate, simply a list of where the piece COULD go
void piece::identifyPossiblePositions() { //make this a pure virtual and make specific pieces a child of the piece class
    //Starting to get into the rules of the game
    //pawn
    position tempPos = currentPosition;
    if (type == "pawn") {
        // a pawn moves forwards
        tempPos.setRow(tempPos.getRow()+1);
        possiblePositions.push_back(tempPos);
        // but captures diagonally
        tempPos = currentPosition;
        tempPos.setRow(tempPos.getRow()+1);
        tempPos.setCol(static_cast<char>(tempPos.getCol()+1));
        possiblePositions.push_back(tempPos);
        // first move: a pawn has the option to move 2 spaces on its first move
        tempPos=currentPosition;
        tempPos.setRow(tempPos.getRow()+2);
        possiblePositions.push_back(tempPos);
        // 
    }
    //king
    //queen
    //bishop
    //knight
    //rook
}

