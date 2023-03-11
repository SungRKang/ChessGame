//class that will manage the overall logic of the game
#ifndef CHESS_H
#define CHESS_H

#include "pieces/headers/position/position.h"
#include "pieces/headers/piece.h"
#include "pieces/headers/board.h"



class chess {
    private:
        board previousGameState;
        board currentGameState;
    public:
        chess();
        board getPreviousGameState();
        board getcurrentGameState();
        void initializeGame();
        
};

#endif