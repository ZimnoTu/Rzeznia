#include "biblioteki.h"

using namespace std;



int main()
{
    srand(time(NULL)); ///tak bardzo wazne do zerowania funkcji czasu;


    Weterynarz vet;
    Spalarnia spal;
    Rzeznia rzeznia;


    vector <Krowa*> krowki; //wektor wskaznikow na krowy
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


//masowe badanie krow przez weterynarza - mozna by bylo to wrzucic gdzies indziej
    int rozmiar_wektora = krowki.size();
    for (int i = 0; i <rozmiar_wektora; ++i)
    {
        vet.zbadaj(krowki.at(i));
        if(krowki.at(i) -> stanZdrowia() == false)
        {
            cout << i+1 << ".\033[036m CHORE \033[0m";
            spal.zakonczZywot(krowki.at(i)); // krowa leci do spalarni
        }
        else
        {
        cout << i+1 << ". ZDROWE ";
        rzeznia.zakonczZywot(krowki.at(i)); //krowa zostaje zabita i przekazana do rozparcelowania
        }
    }

    return 0;
}
