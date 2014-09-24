#pragma once
#include "biblioteki.h"

class Rzeznia{

public:
    Rzeznia() {rzeznik = new Rzeznik;}
    virtual ~Rzeznia() {delete rzeznik;}
    Rzeznik *rzeznik;
    void zabijZwierze(Zwierze *zwierzak);

};
