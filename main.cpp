#include "Player.h"

int main()  {

    // create hero object
    Player hero;

    // create three item objects
    Item item1;
    Item item2 = Item("Sword", 10);
    Item item3 = Item("Shield", 15);

    // add two of them to the hero's inventory
    hero.addItem(item2);
    hero.addItem(item3);
    
    // display the inventory
    hero.showInventory();

    // report the total items in the inventory
    std::cout << "Total items add to inventory: ";
    std::cout << item1.getTotalItems();
    std::cout << std::endl;

    return 0;
}