#include "Player.h"
#include <iostream>


// NEW CONSTRUCTORS
// default constructor
Player::Player()
    : name("Hero"), health(100), maxHealth(100), attackPower(10), inventory(10) {
}

// overloarded constructor
Player::Player(std::string name, int health, int attackPower)
    : name(name), health(health), maxHealth(health), attackPower(attackPower), inventory(10) {
}

// OLD CONSTRUCTORS
/*
// default constructor
Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}
// overloaded constructor
Player::Player(std::string name, int health, int attackPower) {
    this->name = name;
    this->health = health;
    this->attackPower = attackPower;
    maxHealth = health;
*/

// destructor
Player::~Player() {
    std::cout << "The object for Player " << name << " has been destroyed.\n";
}

// takeDamage mathod (health cannot go below 0)
void Player::takeDamage(int damage) {
    if ( damage > 0 ) {
        if ( damage <= health ) {
            health -= damage;
        }
        else {
            health = 0;
            std::cout << name << " falls to the ground, defeated.\n";
        }
    }
}

// display stats
void Player::displayStatus() const {
    std::cout << "[" << name << "] - HP: " << health << "/" << maxHealth << std::endl;
}

// show inventory
void Player::showInventory() const {
    inventory.display();
}

// add item to inventory
void Player::addItem(const Item& item) {
    inventory.addItem(item);
}