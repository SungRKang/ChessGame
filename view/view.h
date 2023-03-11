#ifndef VIEW_H
#define VIEW_H

#include "../logic/pieces/headers/board.h"
#include "../logic/chess.h"
class view{
    private:
        chess chessGame;
    public:
        chess getChessGame();
        void setChessGame(chess aGame);
        void render();
};

#endif