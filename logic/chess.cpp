#include "chess.h"
#include "position.h"
#include "logic/pieces/headers/piece.h"
#include "logic/pieces/headers/pawn.h"

chess::chess(){}
void chess::initializeGame() {
    //initialize the board
    board gamestate;
    //set up the pieces
    position pos('A',1);
    pawn pawn1(pos, pieces::white);
    gamestate.addPiece(pawn1, pos);
    currentGameState = gamestate;
}


