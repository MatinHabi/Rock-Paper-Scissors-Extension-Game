#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"

class Robot: public Move{
protected:
    std::string name;
    std::vector<std::string> defeated = {"Monkey", "Pirate"};
public:
    Robot(): name("Robot"){}
    std::vector<std::string>* getDefeated() override{return &defeated;}
    void addDefeated(std::string thing) override{defeated.push_back(thing);}
    std::string getName() override{return name;}
};



#endif