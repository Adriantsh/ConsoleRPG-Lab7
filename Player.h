#pragma once
#include <string>

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;

public:
    // constructors and destructor
    Player();
    Player(std::string, int, int);
    ~Player();

    // deal damage to player
    void takeDamage(int);

    // accessors
    std::string getName() const 
        { return name; }
    int getHealth() const 
        { return health; }
    int getMaxHealth() const
        { return maxHealth; }
    int getAttackPower() const
        { return attackPower; }

    // display stats to terminal
    void displayStatus() const;
};
