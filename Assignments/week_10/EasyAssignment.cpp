#include <iostream>

// Use reference to increase hero's HP:

void drinkPotion(int& hp, int healing) {
    hp += healing;
    hp = hp + healing;
}

// Use pointer to reduce hero's HP:

void damageHero(int* hp, int damage) {
    *hp -= damage;
}

int main() {
    int heroHP = 10;

    std::cout << "Hero's starting HP: " << heroHP << std::endl;

    std::cout << "Hero drinks a healing potion (+5 HP)." << std::endl;
    drinkPotion(heroHP, 5);
    std::cout << "Hero's current HP: " << heroHP << std::endl;

    std::cout << "Hero takes damage from a goblin (-3 HP)." << std::endl;
    damageHero(&heroHP, 3);
    std::cout << "Hero's current HP: " << heroHP << std::endl;

    return 0;
}
