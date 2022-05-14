//
// Created by Andrea Bertanzon on 14/05/22.
//

#ifndef DESIGN_PATTERNS_CURRENTCONDITIONDISPLAY_H
#define DESIGN_PATTERNS_CURRENTCONDITIONDISPLAY_H


#include "DisplayElement.h"
#include "WeatherData.h"

class CurrentConditionDisplay : public DisplayElement {
private:
    WeatherData weatherData;
    double temperature;
    double humidity;

public:
    explicit CurrentConditionDisplay(WeatherData &wd);

    CurrentConditionDisplay(CurrentConditionDisplay &other) : temperature(other.temperature), humidity(other.humidity),
                                                              weatherData(other.weatherData) {
        std::cout << "CurrentConditionDisplay Copied" << std::endl;
    }

    void askNewData();

    void registerSelf() override;

    void display() override;

private:

    void update() override;
};


#endif //DESIGN_PATTERNS_CURRENTCONDITIONDISPLAY_H
