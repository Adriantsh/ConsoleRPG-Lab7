#include "Player.h"
#include <iostream>

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
}

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