#include <iostream>
#include <array>
#include <random>
#include "src/observer_example/WeatherStation.h"

int main() {
    std::cout << "****** Welcome to the DP application! ******" << std::endl;
    std::cout << "Chose the design pattern to tryout: " << std::endl;
    std::cout << "1. Observer" << std::endl;
    std::cout << "2. Decorator" << std::endl;
    std::cout << "0. To close" << std::endl;

    while (true) {
        std::string result;

        std::cout << "Choose: ";

        std::cin >> result;

        // TODO: change this to a switch!
        if(result != "0"){
            weatherStation();
            system("clear");
            std::cout << "Chose the design pattern to tryout: " << std::endl;
            continue;

        } else {
            system("clear");
            break;
        }
    }
}
