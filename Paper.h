#ifndef PAPER_H
#define PAPER_H
#include "Move.h"

class Paper: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Scissors"};
public:
    Paper(): name("Paper"){}

    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};


#endif