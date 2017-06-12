#include <iostream>
#include "enemies.h"

using namespace std;

Enemy *ninjaAhmet = new Ninja;
Enemy *monsterAli = new Monster;
Enemy *basic = new Enemy;

int main()
{

    ninjaAhmet->setAttackPower(10);
    monsterAli->setAttackPower(100);
    ninjaAhmet->attack();
    monsterAli->attack();
    basic->attack();
    return 0;
}