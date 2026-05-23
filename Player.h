#pragma once
#include "Inventory.h"
#include <string>

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;
    Inventory inventory;
public:
    // constructors and destructor
    Player();
    Player(std::string name, int health, int attackPower);
    ~Player();

    // deal damage to player
    void takeDamage(int);

    // show inventory
    void showInventory() const;

    // add item to inventory
    void addItem(const Item& item);

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
