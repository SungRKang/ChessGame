#include "position.h"


//default constructor
position::position() {
    row =0;
    column = 'A';
}
//constructor
position::position(char alphaCol, int numRow) {
    column = alphaCol;
    row = numRow;
}

position::position(const position &p1) {
    row = p1.row;
    column = p1.column;
}
int position::getRow() {
    return row;
}

char position::getCol() {
    return column;
}

void position::setRow(int input) {
    row = input;
}

void position::setCol(char input) {
    column = input;
}