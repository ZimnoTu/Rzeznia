#include "Zwierzeta.h"


Krowa::Krowa()
{
   gatunek = "Krowa";
   int los = rand()%1000;
   if(los>800) zdrowe = false;
   else zdrowe = true;
}

void Zwierze::poka()
{
    cout << "Gatunek: " << gatunek<< endl;
    cout << "Id: " << numerID << endl;

}
