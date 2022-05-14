//
// Created by Andrea Bertanzon on 07/05/22.
//

#ifndef DESIGN_PATTERNS_WEATHERDATA_H
#define DESIGN_PATTERNS_WEATHERDATA_H


#include <vector>
#include <random>
#include <iostream>
#include "../../Headers/observer_headers/Subject.h"

class WeatherData: public Subject {

public:
    WeatherData() = default;

    void registerObserver(Observer* o) override;

    bool removeObserver(Observer* o) override;

    void notifyObservers() override;

    [[nodiscard]] double getTemperature() const {
        return temperature;
    }

    [[nodiscard]] double getHumidity() const {
        return humidity;
    }

    [[nodiscard]] double getPressure() const {
        return pressure;
    }

    WeatherData(WeatherData& other){
        std::cout << "WeatherData Copied! " << std::endl;
    }

    /**
     * Faking new set of measurements coming from the outside.
     */
    void setMeasurement() {
        std::random_device rd; // obtain a random number from hardware
        std::mt19937 gen(rd()); // seed the generator
        std::uniform_real_distribution<> distr(0, 40);

        temperature = distr(gen);
        humidity = distr(gen);
        pressure = distr(gen);

        notifyObservers();
    }

private:
    /**
     * List of all the registered observers.
     * used [std::vector] since the list can grow and shrink dynamically
     */
    std::vector<Observer*> observers;

    double temperature{};
    double humidity{};
    double pressure{};
};


#endif //DESIGN_PATTERNS_WEATHERDATA_H
