#include "biblioteki.h"

using namespace std;



int main()
{
    srand(time(NULL)); ///tak bardzo wazne do zerowania funkcji czasu;


    Weterynarz vet;
    Spalarnia spal;
    Rzeznia rzeznia;

    vector <Zwierze*> krowki; //wektor wskaznikow na krowy lepsza by byla lista dwukierunkowa
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Krowa);
    krowki.push_back(new Swinia);
    krowki.push_back(new Swinia);
    krowki.push_back(new Swinia);
    krowki.push_back(new Swinia);


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
            string mieso = rzeznia.zabijZwierze(zdrowe);
            (rozpoznajRodzajMiesa(mieso)); ///produkuje wolowine - new Wolowina !!!!!!!!!!!!!!!wycieka PAMIEC!!!!!!!!!!!!!!!
            ///tutaj przydaloby sie jakos zbierac to wszystko w jeden wektor czy cos...
            //miesiwo.push_back(rozpoznajRodzajMiesa(mieso)); //vector<Mieso>miesiwo;
            /*to nie zadziala, poniwaza rozpoznajRodzajMiesa jest funkcja void i nie zwraca konkretnego Miesa, bo Mieso to klasa abstrakcyjna*/
        }
        i++;
}




 //   Wolowina w;
 //   w.pokazMieso();

    return 0;
}
