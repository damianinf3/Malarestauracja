#include <iostream>

using namespace std;
class Zamowienie
{
public:
    string danie;
    int nr_zam;
    int czas_przygot;
    int zysk;
    //string odpowiedz;
    int punkt; //1lub 0


    void wczytaj();//wczytuje menu
    void Zadaj();//użytkownik wybiera danie
    void Sprawdz();//sprawdza czy jest czas
 void Licz_zysk();//Podlicza wszystkie zyski z obiadu


};
