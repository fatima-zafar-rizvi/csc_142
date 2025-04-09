#include <iostream>
#include <string>

enum class CharacterClass {
    Warrior,
    Mage,
    Archer, 
    Rogue
};

struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

// Convert the enum to string for printing with a helper function:
std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Mage:    return "Mage";
        case CharacterClass::Archer:  return "Archer";
        case CharacterClass::Rogue:   return "Rogue";
        default:                      return "Unknown";
    }
}

int main() {
    // Initialize array of characters:
    Character characters[4]{
      
        {"Aragon",  CharacterClass::Warrior, 100, 90.5f},
        {"Gandalf", CharacterClass::Mage,    120, 75.0f},
        {"Legolas", CharacterClass::Archer,   85, 80.0f},
        {"Frodo",   CharacterClass::Rogue,    80, 60.5f}
    };

    // Characters details:
    std::cout << "Characters:\n------------\n";

                      for (int i = 0; i < 4; i++) {
        std::cout << "Name: " << characters[i].name << ", Type: " 
                  << classToString(characters[i].type)
                  << ", Health: " << characters[i].health
                  << ", Strength: " << characters[i].strength
                  << std::endl;
    }

    // Average health:
    int sumHealth = 0;
    for (int i = 0; i < 4; i++) {
        sumHealth += characters[i].health;
    }

    // Converts one data type into another with static_cast:
    float avgHealth = static_cast<float>(sumHealth) / 4.0f;
    
    std::cout << "\nAverage Health: " << avgHealth << std::endl;


    return 0;
}