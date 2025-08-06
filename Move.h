#ifndef MOVE_H
#define MOVE_H
#include <vector>
#include <string>


class Move{
public:
    virtual std::vector<std::string>* getDefeated()= 0;
    virtual void addDefeated(std::string thing)= 0;
    virtual std::string getName() = 0;
};

#endif