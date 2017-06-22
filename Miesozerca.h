#pragma once
#include "Weganin.h"



class   Miesozerca: public Weganin
{



public:
/*int wzyskl;
int czasl;
double zysk;*/
 Miesozerca(int=1,int=1);
  ~Miesozerca();
   void wczytaj();//wczytuje menu
    void Zadaj();//u¿ytkownik wybiera danie
   // void Czas();//sprawdza czy jest czas
 void Licz_zysk();//Podlicza wszystkie zyski z obiadu
};
