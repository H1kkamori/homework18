#pragma once
#include <string>

class Player 
{
public:
    std::string name;
    int score;

    Player() : name(""), score(0) {}
    Player(std::string name, int score) : name(name), score(score) {}
};
