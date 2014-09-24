#pragma once
#include "weterynarz.h"
#include "Zwierzeta.h"

class PrzerobZwierzat{

public:
    virtual string zakonczZywot(Zwierze *zwierzak) = 0; //i tak mam klase abstrakcyjna
    virtual ~PrzerobZwierzat() { }
};

class Spalarnia : public PrzerobZwierzat{

public:
    virtual ~Spalarnia() { }
    virtual string zakonczZywot(Zwierze *zwierzak)
    {
        cout << zwierzak -> gatunek /*<<  " o id: "<< zwierzak->numerID */<< " zostala spalona" << endl;
        delete zwierzak;
        return "spalony";
    }
};

class Rzeznia : public PrzerobZwierzat{

public:
    virtual ~Rzeznia() { }
    virtual string zakonczZywot(Zwierze *zwierzak);


};
