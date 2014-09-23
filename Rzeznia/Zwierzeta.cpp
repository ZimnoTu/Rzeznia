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
    //cout << "Zdrowe: " << (zdrowe? "Tak": "Nie")<<endl;///NIE POWINNO BYC WIDOCZNE POKI NIE ZBADANE
}

//bool Zwierze::setZdrowe(bool zdrowe)
//{
//    cout << zdrowe? cout<< "tak": cout << "nie" << endl;
//    return zdrowe;
//}
