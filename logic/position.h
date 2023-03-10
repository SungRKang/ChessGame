//poition.h
//a class that will represent a datatype called position
//2 different data to track
    //Row
    //Column

//Although manipulation of the matrix will need row and column to be in the form of integer, storing it will be in the form of alpha column and num row

#ifndef POSITION_H
#define POSITION_H

class position {
    private:
        int row;
        char column;
        
    public:
        position(); //default contructor
        position(char alphaCol, int numRow); //constructor
        position(const position &p1); //copy constructor
        int getRow();
        char getCol();
        void setRow(int input);
        void setCol(char input);
};

#endif