#pragma once
#include <iostream>
#include <string>

class Item {
private:
    static int totalItems;
    std::string name;
    int value;
public:
    Item(std::string name = "Scrap", int value = 0);
    static int getTotalItems();
    static void incrementTotalItems();
    std::string getName() const
        { return name; }
    int getValue() const
        { return value; }
    void display();
};