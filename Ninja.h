#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Monkey", "Robot"};
public:
    Ninja(): name("Ninja"){}
    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};



#endif