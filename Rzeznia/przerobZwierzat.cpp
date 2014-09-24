#include "przerobZwierzat.h"

string Rzeznik::zakonczZywot(Zwierze *zwierzak)//wywolane przez glownego Rzeznika, ktory rozdzieli
{
        cout << zwierzak -> gatunek<< " zotala zabita i przekazana do przerobki." << endl;
        //zapamietanie info o gatunku:
        string rodzajZwierzaka;
        rodzajZwierzaka = zwierzak->gatunek;

        delete zwierzak;
        return rodzajZwierzaka; //i przekazanie do metody klasy dzielacej mieso;
}
