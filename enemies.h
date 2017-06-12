#include <iostream>

using namespace std;

class Enemy
{
protected:
    int attackPower = 1;
public:
    void setAttackPower(int);
    virtual void attack();
};

class Ninja: public Enemy
{
public:
    void attack();
};

class Monster: public Enemy
{
public:
    void attack();
};