#ifndef VOLS_H_INCLUDED
#define VOLS_H_INCLUDED
class Vols{
private:
    int Numvol;
    int Nbrmax_place;
    std::string Destination;
    float Prix;


public:
   Vols(int numvol1,int nbrplmax,std::string dest1,float prix1);
   void setnumvol(int num);
   int getnumvol();
   void setnbrplace(int nbrpl);
   int getnbrplace();
   void setDestination(std::string dest);
   std::string getDestination();
   void setprix (float price);
   float getprix();
   void affiche();
   };

#endif // VOLS_H_INCLUDED
