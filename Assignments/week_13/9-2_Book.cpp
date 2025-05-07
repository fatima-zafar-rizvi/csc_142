#include <iostream>
#include <cstring>
#include <map>

int main(int argc, char** argv) {
    std::map<int, int> length_distribution;

    for (int i = 1; i < argc; ++i) {
        int length = std::strlen(argv[i]);
        length_distribution[length]++;
    }

    std::cout << "Histogram of argument length distribution:\n";
    for (const auto& pair : length_distribution) {
        std::cout << pair.first << " characters: ";
        for (int j = 0; j < pair.second; ++j) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}
