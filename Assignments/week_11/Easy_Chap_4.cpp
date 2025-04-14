#include <iostream>

class Globlin {

    public:
    // Constructor:
    Goblin() {
        std::cout << "A Goblin has been summoned!" << std::endl;
    }

    // Destructor:
    Goblin() {
        std::cout << "The Goblin has been vanquished!" << std::endl;
    }
};

int main() {
    {
        // Create Goblin:
        Goblin create; 
    } // Call Destructor:

    return 0;
}