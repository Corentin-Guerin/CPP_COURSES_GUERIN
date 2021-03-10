#include <iostream>
#include <string>
#include <vector>

class Course{
    private:       
        std::string _Identifiant_Course ;
        int _Meilleur_Score[3]{15,18,21} ;
        std :: string _Nom_Meilleur_Score [3]{"Pierre","Paul","Jacque"} ;

        int _Score_Enregistrer = -1 ;
        std::string _Pseudo_Joueur ;

    public:     
        Course() ;  
        Course(std::string _Identifiant_Course) ; 

        void add_Score() ;
        void calcul_Moyenne() ;
        void affichePseudoMeilleurTemps() ; 
        void afficheScores() ;  


        std :: string getIdentifiant_Course() ;
        std :: string getPseudo_Joueur() ;
        int getScore_Enregistrer() ;
   

};