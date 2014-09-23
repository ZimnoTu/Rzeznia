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

    Zwierze() {numerID = rand()%500+100; }
    virtual ~Zwierze () {cout<< "Zlikwidowano zwierze"<< endl; }

    virtual void poka();
    //bool setZdrowe(bool zdrowe); POWINNO DZIALAC INACZEJ


};

class Krowa : public Zwierze{

    public:
    Krowa();
    virtual ~Krowa(){}
};

