#include "produkcjaMiesa.h"

void rozpoznajRodzajMiesa (string mieso)
{
    if(mieso == "Krowa") new Wolowina; // gdzies likwidowac powstale kawalki miesa!
    else if(mieso == "Swinia") new Wieprzowina;
    else cout << "Nie przerabiamy tego typu zwierzat!"<< endl;
}
