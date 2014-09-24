#include "weterynarz.h"
#include "Zwierzeta.h"

using namespace std;

void Weterynarz::zbadaj(Zwierze* z) // weterynarz okresla stan zdrowia zwierzaka
{
    bool wyrok;
    int losowanie = rand()%100;
    if (losowanie > 80) wyrok = false;
    else wyrok = true;
    z->set_stanZdrowia(wyrok);
}

