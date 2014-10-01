#include "biblioteki.h"

Wolowina::Wolowina()
{
  cout << "Powstaje wolowina" << endl;
    rodzajMiesa = "wolowina";
    poledwica = 1;
    antrykot = 1;
    udziec = 2;
}

void Wolowina::pokazMieso()
{
    cout << "Rodzaj miesa: "<< rodzajMiesa << endl;
    cout << "Poledwic: " << poledwica << endl;
    cout << "Antrykotow: "<< antrykot << endl;
    cout << "Udzcow: " << udziec << endl;

}

Wieprzowina::Wieprzowina()
{
    cout << "Powstaje wieprzowina"<< endl;
    rodzajMiesa = "wieprzowina";
    lopatka = 2;
    golonka = 4;
    schab = 1;
}

void Wieprzowina::pokazMieso()
{
    cout << "Rodzaj miesa: "<< rodzajMiesa << endl;
    cout << "Lopatek: " << lopatka << endl;
    cout << "Golonek: "<< golonka << endl;
    cout << "Schab: " << schab << endl;

}


