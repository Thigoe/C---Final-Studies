#include <iostream>
#include "enemies.h"

void Enemy::attack()
{
    cout << "I'm basic! -" << attackPower << endl;
}

void Enemy::setAttackPower(int a)
{
    attackPower = a;
}

void Ninja::attack()
{
    cout << "I'm ninja, ninja chop! -" << attackPower << endl;
}

void Monster::attack()
{
    cout << "Monster, monster eats! -" << attackPower << endl;
}