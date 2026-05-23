#include "Item.h"

int Item::totalItems = 0;

Item::Item(std::string name, int value)
    : name(name), value(value)
{}

int Item::getTotalItems() {
    return totalItems;
}

void Item::incrementTotalItems() {
    totalItems++;
}

void Item::display() {
    std::cout << "[" << name << "] (Value: " << value << ")\n";
}