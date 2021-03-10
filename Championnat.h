#include <iostream>
#include <string>
#include <vector>

class Championnat{
    private:       
        int _Nombre_Course = 4;
        std :: string _Pseudo_Joueur [4]{"Jean","Pierre","Paul","Jacque"} ;

    public:     
        Championnat() ;  

        void Meilleur_Temps_Toute_Course() ;
        void Meilleur_Temps_Total() ;
   
};