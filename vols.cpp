#include<iostream>
#include"Vols.h"

    Vols::Vols(int numvol1,int nbrplmax,std::string dest1,float prix1){
        Numvol=numvol1;
        Nbrmax_place=nbrplmax;
        Destination=dest1;
        Prix=prix1;

    };
    void Vols::setnumvol(int num){
    Numvol=num;
    }
    int Vols::getnumvol(){
    return Numvol;
    };
    void Vols::setnbrplace(int nbrpl){
    Nbrmax_place=nbrpl;
    }
    int Vols::getnbrplace() {
    return Nbrmax_place;
    };
    void Vols::setDestination(std::string dest){
    Destination=dest;
    }
    std::string Vols::getDestination(){
        return Destination;
    }
    void Vols::setprix (float price){
    Prix=price;
    }
    float Vols::getprix(){
    return Prix;
    }
    using namespace std;
    void Vols::affiche()
     {
      cout<<"numvol      : "<<Numvol<<endl;
      cout<<"nbrplacemax : "<<Nbrmax_place<<endl;
      cout<<"destination  : "<<Destination<<endl;
      cout<<"prix : "<<Prix<<endl;

    }
