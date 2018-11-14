#include <iostream>

class Warrior
{
    virtual int LifePoints(int Life);
    virtual int ManaPoints(int Mana);
    virtual int Attack(int Damage);
    virtual std::string Skill(std::string Skill);
};