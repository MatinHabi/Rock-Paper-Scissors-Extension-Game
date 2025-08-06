#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"

class Zombie: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Robot", "Ninja"};
public:
    Zombie(): name("Zombie"){}
    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};



#endif