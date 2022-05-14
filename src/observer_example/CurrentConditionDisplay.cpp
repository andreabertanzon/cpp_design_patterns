//
// Created by Andrea Bertanzon on 14/05/22.
//

#include <iostream>
#include "CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(WeatherData &wd) {
    weatherData = wd;
    temperature = 0;
    humidity = 0;
}

void CurrentConditionDisplay::askNewData() {
    temperature = weatherData.getTemperature();
    humidity = weatherData.getHumidity();
}

void CurrentConditionDisplay::display() {
    std::cout << "Current condition: " << std::endl;
    std::cout << "\tTemperature: " << temperature << std::endl;
    std::cout << "\tTemperature: " << humidity << std::endl;
}

void CurrentConditionDisplay::update() {
    askNewData();
}

void CurrentConditionDisplay::registerSelf() {
    auto ptr = this;
    weatherData.registerObserver(this);
}
