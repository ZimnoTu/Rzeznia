#pragma once
#include "biblioteki.h"


class Mieso{
protected:
    string rodzajMiesa;

public:
    virtual void pokazMieso() = 0;
    virtual ~Mieso () { }
};

class Wolowina: public Mieso{
protected:
    double poledwica;
    double antrykot;
    double udziec;

public:
    Wolowina();
    virtual void pokazMieso();

};

class Wieprzowina: public Mieso{
protected:
    double lopatka;
    double golonka;
    double schab;

public:
    Wieprzowina();
    virtual void pokazMieso();
};
