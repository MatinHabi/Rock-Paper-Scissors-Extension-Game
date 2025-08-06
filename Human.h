#include <iostream>
#ifndef HUMAN_H
#define HUMAN_H
#include "MoveManager.h"
#include "Player.h"

class Human: public Player{
protected:
    std::string name;
    Move* move;
public:
    Human(): name("Human"){}
    Human(std::string n): name(n){}

    std::string getName() override{return name;}
    Move* makeMove() override{
        MoveManager *m = new MoveManager();
        std::string foo;
        std::cout << "Enter move: ";
        std::cin >> foo;
        move = m->movePtr(foo);
        return move;
    }
};

#endif