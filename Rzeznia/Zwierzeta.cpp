#include "Zwierzeta.h"


Krowa::Krowa()
{
   gatunek = "Krowa";
}

Swinia::Swinia()
{
    gatunek = "Swinia";
}

void Zwierze::poka()
{
    cout << "Gatunek: " << gatunek<< endl;
    cout << "Id: " << numerID << endl;
}
