#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Pirate", "Zombie"};
public:
    Monkey(): name("Monkey"){}
    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};



#endif