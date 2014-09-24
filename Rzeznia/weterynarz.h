#pragma once
#include "Zwierzeta.h"

class Weterynarz{
private:

    //void operator=(const Weterynarz&weterynarz){}

public:
    Weterynarz() {}
    Weterynarz(const Weterynarz & weterynarz){}

    void zbadaj(Zwierze* z);
};
