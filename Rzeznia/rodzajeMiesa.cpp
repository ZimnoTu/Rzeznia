#include "biblioteki.h"

Wolowina::Wolowina()
{
  // cout << "Powstaje wolowina" ;
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


