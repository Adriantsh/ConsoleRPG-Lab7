#include "Player.h"

int main()  {

    // create hero and wizard instances
    Player hero;
    Player wizard("Frog", 120, 15);

    // initial stats
    hero.displayStatus();
    wizard.displayStatus();

    // deal 25 damage to hero
    hero.takeDamage(25);
    hero.displayStatus();

    // deal 150 damagae to wizard
    wizard.takeDamage(150);
    wizard.displayStatus();

    return 0;
}