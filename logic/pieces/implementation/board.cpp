#include "../headers/board.h"

board::board() { //always an 8x8 matrix of empty pieces
    std::vector<std::vector<piece>> matrix;
    for(int i=0;i<8;i++) {
        for (int j=0;j<8;j++) {
            matrix[i][j] = pieces::pieceType::empty;
        }
    }
    theBoard = matrix;
}

std::vector<std::vector<piece>> board::getBoard() {
    return theBoard;
}
void board::setBoard(std::vector<std::vector<piece>> aBoard) {
    theBoard = aBoard;
}
void board::addPiece(piece aPiece, position aPosition) {
    std::vector<int> temp;
    temp = aPosition.convert();
    theBoard[temp[1]][temp[0]] = aPiece;
}