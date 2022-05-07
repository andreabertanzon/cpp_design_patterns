//
// Created by Andrea Bertanzon on 07/05/22.
//

#ifndef DESIGN_PATTERNS_SUBJECT_H
#define DESIGN_PATTERNS_SUBJECT_H

#include "Observer.h"

class Subject {
    virtual void registerObserver(Observer* observer) = 0;
    virtual bool removeObserver(Observer* observer) = 0;
    virtual void notifyObservers() = 0;
};

#endif //DESIGN_PATTERNS_SUBJECT_H
