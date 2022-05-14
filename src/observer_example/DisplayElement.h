//
// Created by Andrea Bertanzon on 07/05/22.
//

#ifndef DESIGN_PATTERNS_DISPLAYELEMENT_H
#define DESIGN_PATTERNS_DISPLAYELEMENT_H

#include "../../Headers/observer_headers/Observer.h"
#include "../../Headers/observer_headers/Subject.h"

class DisplayElement: public Observer{
    virtual void display() = 0;

public:
    virtual void registerSelf() = 0;
};

#endif //DESIGN_PATTERNS_DISPLAYELEMENT_H
