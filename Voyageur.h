#ifndef VOYAGEUR_H_INCLUDED
#define VOYAGEUR_H_INCLUDED
class voyageur{
    private:
    std::string name;
    std::string prenom;
    int age;
    std::string num_passport;

    public:
    voyageur(std::string name1,std::string prenom1,int age1,std::string num_passport1);
    void setName(std::string nom);
    std::string getName();
    void setAge (int age1);
    int getAge();
    void setPassport(std::string passnbr);
    std::string getPassport();
    void setPrenom(std::string PrenomA);
    std::string getPrenom();
    void affiche();

    };

#endif
