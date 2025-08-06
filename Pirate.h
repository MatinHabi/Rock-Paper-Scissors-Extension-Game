#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Ninja", "Zombie"};
public:
    Pirate(): name("Pirate"){}
    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};



#endif