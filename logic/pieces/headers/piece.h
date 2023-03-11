//Design a class that is representative of a chess piece
//Data to keep track
    //type
    //current position
    //possible positions
    //default position

#ifndef PIECE_H
#define PIECE_H

#include <string>
#include <vector>
#include "position.h"
namespace pieces {
    enum pieceColor {white , black};
    enum pieceType {pawn,king,queen,bishop,knight,rook,empty};
}

class piece {
    private:
        pieces::pieceType type;
        pieces::pieceColor color;
        position currentPosition;
        position defaultPosition;
        std::vector<position> possiblePositions;

        bool firstMove;
    public:
        piece();
        piece(pieces::pieceType theType);
        pieces::pieceType getType();
        position getCurrentPosition();
        position getDefaultPosition();
        std::vector<position> getpossiblePositions();
        bool getFirstMove();
        pieces::pieceColor getColor();
        void setColor(pieces::pieceColor theColor);
        void setFirstMove(bool flag);
        void setType(pieces::pieceType theType);
        void setcurrentPosition(position theCurrentPosition);
        void setdefaultPosition(position theDefaultPosition);
        //this setter does similar things to identifyPossiblePositions() given below, but is a way to force the possible positions without checking for game rule compatbility
        //should not be used
        void setpossiblePositions(std::vector<position> thePossiblePositions);
        // a function that changes the position of the piece upon checking the validity of the move
        // returns TRUE if the move was completed and FALSE if the move was not possible
        bool movePiece(position desiredPosition); 
        // a function that identifies the possible positions that a piece can move to and updates the possiblePositions vector
        // returns TRUE if there was a change and FALSE if there were none
        virtual void identifyPossiblePositions(); 
        //DOES NOT check if the move would be legal in a given game state, but rather is a list of the possible moves.


};

#endif