#include "Rock.h"
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer: public Player{
protected:
    std::string name;
    Move* move;
public:
    Computer() : name("Computer"){}
    std::string getName() override{return name;}

    Move* makeMove() override{
        move = new Rock; return move;
    }

};


#endif