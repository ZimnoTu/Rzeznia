#include "przerobZwierzat.h"

string Rzeznik::zakonczZywot(Zwierze *zwierzak)//wywolane przez glownego Rzeznika, ktory rozdzieli
{
        string rodzajZwierzaka;
        rodzajZwierzaka = zwierzak->gatunek;
        delete zwierzak;
        return rodzajZwierzaka; //i przekazanie do metody klasy dzielacej mieso;
}
