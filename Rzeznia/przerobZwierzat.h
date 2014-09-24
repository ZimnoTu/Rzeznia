#pragma once
#include "weterynarz.h"
#include "Zwierzeta.h"

class PrzerobZwierzat{

public:
    virtual string zakonczZywot(Zwierze *zwierzak) = 0; //przerobic potem na strukture, zeby zwracalo gatunek i wage
    virtual ~PrzerobZwierzat() { }

//przyjaciele:

    ///friend class Rzeznik;
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

class Rzeznik : public PrzerobZwierzat{

public:
    virtual ~Rzeznik() { cout << "Rzeznik konczy zmiane"<< endl;}
    virtual string zakonczZywot(Zwierze *zwierzak);


};
