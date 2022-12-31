#include<iostream>
#include "Voyageur.h"

    voyageur::voyageur(std::string name1,std::string prenom1,int age1,std::string num_passport1){
        name=name1;
        prenom=prenom1;
        age=age1;
        num_passport=num_passport1;
        };

    void voyageur::setName(std::string nom){
            name=nom;
       };
    std::string voyageur::getName(){ //name getter
            return name;
    };
    void voyageur::setAge (int age1){ //age setter
            age=age1;
    };
    int voyageur::getAge(){ //age getter
             return age;
    };
    void voyageur::setPassport(std::string passnbr){
            num_passport=passnbr;
    };
    std::string voyageur::getPassport(){
            return num_passport;
    };
    void voyageur::setPrenom(std::string PrenomA){
        prenom=PrenomA;
    };
    std::string voyageur::getPrenom(){
    return prenom;
    };
    using namespace std;
    void voyageur::affiche()
     {
      cout<<"nom       : "<<name<<endl;
      cout<<"prenom    : "<<prenom<<endl;
      cout<<"age       : "<<age<<endl;
      cout<<"num_passport      : "<<num_passport<<endl;

    }



