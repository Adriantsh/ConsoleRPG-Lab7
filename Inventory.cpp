#include "Inventory.h"

Inventory::Inventory(int capacity) 
    : items(new Item[capacity]),
      capacity(capacity),
      itemCount(0)
{}

Inventory::~Inventory() {
    delete [] items;
}

bool Inventory::addItem(const Item& item) {
    if (itemCount < capacity) {
        items[itemCount] = item;
        item.incrementTotalItems();
        itemCount++;
        std::cout << "An item was added: [" << item.getName() << "]\n";
        return true;
    } else {
        return false;
    }
}

void Inventory::display() const {
    std::cout << "Inventory (" << itemCount << "/" << capacity << "):\n";
    for (int i = 0; i < itemCount; i++) {
        std::cout << "  ";
        items[i].display();
    }
}