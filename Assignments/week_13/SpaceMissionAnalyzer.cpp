#include <iostream>
#include <cmath>
#include <iomanip> // Corrected include directive

int main() {
    // Inputs:
    double distance, fuel, spaceship_weight, life_support;
    int crew_size;
    
    // Prompt user for input:
    std::cout << "Enter the distance to planet (in million kilometers): ";
    std::cin >> distance;

    std::cout << "Enter Fuel available (in tons): ";
    std::cin >> fuel;

    std::cout << "Enter Crew size (number of astronauts): ";
    std::cin >> crew_size;

    std::cout << "Enter Spaceship weight (in tons): ";
    std::cin >> spaceship_weight;

    std::cout << "Enter Life support duration available (in days): ";
    std::cin >> life_support;

    // Calculations:
    // 1. Fuel Efficiency (in %):
    double fuel_efficiency = (fuel / spaceship_weight) * 100;

    // 2. Travel Speed (in km/day):
    double speed = (fuel * 10000) / (crew_size * spaceship_weight);

    // 3. Travel time (in days):
    double travel_time = (distance * 1000000) / speed;
    int travel_days = static_cast<int>(std::ceil(travel_time)); // Uncommented this line

    // 4. Check Viability:
    bool is_viable = (fuel_efficiency >= 20.0) &&
                     (life_support >= travel_days + 10) &&
                     (crew_size >= 2 && crew_size <= 8) &&
                     (spaceship_weight < 500);

    // Outputs:
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nFuel efficiency: " << fuel_efficiency << "%\n"; // Corrected variable name

    std::cout << std::setprecision(0);
    std::cout << "Estimated speed: " << speed << " km/day\n";
    std::cout << "Estimated travel time: " << travel_days << " days\n";

    std::cout << "\nMission Status: ";
    if (is_viable) {
        std::cout << "VIABLE\n";
    } else {
        std::cout << "NOT VIABLE\n";
    }

    return 0;
}
