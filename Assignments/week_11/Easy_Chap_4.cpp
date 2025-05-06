#include <iostream>

class Goblin {
public:
    // Constructor
    Goblin() {
        std::cout << "A Goblin has been summoned!" << std::endl;
    }

    // Destructor
    ~Goblin() {
        std::cout << "The Goblin has been vanquished!" << std::endl;
    }
};

int main() {
    {
        // Create Goblin
        Goblin create;
        // Destructor will be called automatically here at end of scope
    }

    return 0;
}
