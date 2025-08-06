#include "Human.h"
#include "Computer.h"
//#include <iostream>
#ifndef REFEREE_H
#define REFEREE_H

class Referee{
public:
    Referee(){}
    Player* refGame(Player * player1, Player * player2){
        auto m1 = player1->makeMove();
        auto m2 = player2->makeMove();

        std::vector<std::string> m1Defeat = *m1->getDefeated();
        std::vector<std::string> m2Defeat = *m2->getDefeated();

        //Player 2 Wins
        for(int i = 0 ; i < m1Defeat.size() ; i++){
            if(m1Defeat[i] == m2->getName()){
                //std::cout << player2->getName() << " Wins\n";
                return player2;
            }
        }

        //Tie
        if(m1->getName() == m2->getName()){
            //std::cout << "It's a Tie\n";
            return nullptr; 
        }

        //Player 1 wins
        return player1; 
    }   
};

/*
Monkey 
Robot
Pirate
Ninja
Zombie
*/


#endif