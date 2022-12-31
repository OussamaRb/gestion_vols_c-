#include <iostream>
#include "Voyageur.h"
#include "Vols.h"
using namespace std;

int main()
{
    voyageur voyageur1("oussama","rabhi",22,"F22312");
    Vols vol1(22,155,"New Yorl",2900);

    voyageur1.affiche();
    vol1.affiche();






    return 0;
}
