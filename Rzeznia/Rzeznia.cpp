#include "Rzeznia.h"

string Rzeznia::zabijZwierze(Zwierze *zwierzak)
{
    string mieso;
    //cout << " Rzeznia przyjmuje towar"<< endl;
    mieso = rzeznik->zakonczZywot(zwierzak);
    return mieso;
}
