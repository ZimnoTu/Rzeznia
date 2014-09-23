#pragma once
#include <iostream>
#include "Zwierzeta.h"

class Weterynarz{ // woha! moj singleton
private:
    Weterynarz() {}
    Weterynarz(const Weterynarz & weterynarz){}
    void operator=(const Weterynarz&weterynarz){}

public:
    bool czyZdrowe(Zwierze* z);///ZMIENIC

};
