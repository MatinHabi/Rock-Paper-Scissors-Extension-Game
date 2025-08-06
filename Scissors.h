#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Rock"};
public:
    Scissors():name("Scissors"){}
    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};


#endif