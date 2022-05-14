//
// Created by Andrea Bertanzon on 14/05/22.
//

#include <iostream>

#include "WeatherStation.h"
#include "DisplayElement.h"
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

void setupStation(DisplayElement *display) {
    display->registerSelf();
}

void weatherStation() {
    WeatherData weatherData;
    weatherData.setMeasurement(); // Initialize weather data with fake random data

    CurrentConditionDisplay currentConditionDisplay(weatherData);
    setupStation(&currentConditionDisplay);

    std::cout << "****** Welcome to the WeatherStation! ******" << std::endl;
    std::cout << "Press 1 to display data 0 to go back" << std::endl;

    std::string input;

    std::cout << "Your choice: ";
    std::cin >> input;

    while (input != "0") {
        weatherData.setMeasurement();
        currentConditionDisplay.askNewData();
        currentConditionDisplay.display();
        std::cout << "Press 1 to display data 0 to go back: ";
        std::cin >> input;
        system("clear");
    }
}