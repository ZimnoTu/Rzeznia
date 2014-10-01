#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;

class Zwierze{
protected:
    int numerID;
    //double waga; //od tego zalezne potem bedzie waga poszczegolnych kwalkow miesa
    bool zdrowe;

public:
    string gatunek;

    Zwierze() {numerID = rand()%500+100; zdrowe = false;}
    virtual ~Zwierze () {/*cout<< "Zlikwidowano zwierze"<< endl;*/ }

    virtual void poka();

    bool stanZdrowia() {return zdrowe;}
    void set_stanZdrowia(bool czyZdrowe) {this->zdrowe = czyZdrowe;} // tutaj bedzie szedl wyrok od weterynarza

};

class Krowa : public Zwierze{

    public:
    Krowa();
    virtual ~Krowa(){}
};

class Swinia : public Zwierze{
    public:
    Swinia();
    virtual ~Swinia(){}
};

