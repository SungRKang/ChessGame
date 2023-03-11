#include "view.h"
#include <string>
#include <vector>
#include <iostream>
chess view::getChessGame(){
    return chessGame;
}
void view::setChessGame(chess aGame){
    chessGame = aGame;
}
void view::render() {
    std::string wall = "|-----|-----|-----|-----|-----|-----|-----|-----|";
    //copy the current gamestate
    std::vector<std::vector<piece>> matrix = chessGame.getcurrentGameState().getBoard();

    for (int i=0;i<matrix.size();i++) {
        std::cout << wall << std::endl;
        for (int j=0; j<matrix[i].size(); j++) {
            std::cout << "|";
            if (matrix[i][j].getType() == pieces::pawn) {
                std::cout << "pawn ";
            } else {
                std::cout <<"     ";
            }
            std::cout << "|";
        }
    }
}