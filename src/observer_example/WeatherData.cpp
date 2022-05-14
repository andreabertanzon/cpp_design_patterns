//
// Created by Andrea Bertanzon on 07/05/22.
//

#include "WeatherData.h"

void WeatherData::registerObserver(Observer *o) {
    observers.emplace_back(o);
}

bool WeatherData::removeObserver(Observer *o) {
    for (auto begin = observers.begin(); begin < observers.end(); begin++) {
        if(*begin ==o){
            begin = observers.erase(begin);
        }
    }
}

void WeatherData::notifyObservers() {
    for(auto observer : observers){
        observer -> update();
    }
}
