#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Robot.h"
#include "Ninja.h"
#include "Move.h"
#ifndef MOVEMANAGER_H
#define MOVEMANAGER_H

class MoveManager{
public:
    MoveManager(){}
    Move* movePtr(std::string move){
        if(move == "Rock")
            return new Rock;
        else if (move == "Paper")
            return new Paper;
        else if (move == "Scissors")
            return new Scissors;
        else if (move == "Monkey")
            return new Monkey;
        else if (move == "Pirate")
            return new Pirate;
        else if (move == "Zombie")
            return new Zombie;
        else if (move == "Robot")
            return new Robot;
        else if (move == "Ninja")
            return new Ninja;
    }
};

#endif