#include "logic/chess.h"
#include "view/view.h"


int main () {
    chess aGame;
    aGame.initializeGame();
    view aView;
    aView.setChessGame(aGame);
    aView.render();
    return 0;
}