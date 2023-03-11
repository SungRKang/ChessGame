#include "../headers/piece.h"
#include <string>
#include <vector>
#include <algorithm>

//implementation file for the piece class

piece::piece() {}
piece::piece(pieces::pieceType theType) {
    type = theType;
}

pieces::pieceType piece::getType(){
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
void piece::setType(pieces::pieceType theType){
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

