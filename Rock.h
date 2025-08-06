#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Paper"};
public:
    Rock(): name("Rock"){}
    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};



#endif