//class that will manage the overall logic of the game
#include "position.h"
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