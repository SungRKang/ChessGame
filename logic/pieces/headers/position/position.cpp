#include "position.h"


//default constructor
position::position() {
    column = 'A';
    row =0;
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

std::vector<int> position::convert() {
    std::vector<int> temp;
    temp.push_back(int(column) - 65); //convert the letter into ascii, offset so that A is 0
    temp.push_back(row-1); //Although the convention gives positions starting at 1, matrix will offset so that it starts at 0
}