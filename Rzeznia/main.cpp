#include "biblioteki.h"

using namespace std;



int main()
{
    srand(time(NULL)); ///tak bardzo wazne do zerowania funkcji czasu;


    Weterynarz vet;
    Spalarnia spal;
    Rzeznia rzeznia;

    vector <Krowa*> krowki; //wektor wskaznikow na krowy lepsza by byla lista dwukierunkowa
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);


   // rzeznia.zabijZwierze(krowki.at(8));


//masowe badanie krow przez weterynarza - mozna by bylo to wrzucic gdzies indziej
int i = 1;
while(krowki.size() !=0)
{
   vet.zbadaj(krowki.at(0));
        if(krowki.at(0) -> stanZdrowia() == false)
        {
            cout << i << ".\033[036m CHORE \033[0m";
            Zwierze *chore = krowki.at(0);
            krowki.erase(krowki.begin()+0);
            spal.zakonczZywot(chore); // krowa leci do spalarni
        }
        else
        {
        cout << i<< ". ZDROWE ";

         Zwierze *zdrowe = krowki.at(0);
            krowki.erase(krowki.begin()+0);
          //  rzeznia.rzeznik->zakonczZywot(zdrowe); //krowa zostaje zabita i przekazana do rozparcelowania
            rzeznia.zabijZwierze(zdrowe);
        }
        i++;
}




 //   Wolowina w;
 //   w.pokazMieso();

    return 0;
}
