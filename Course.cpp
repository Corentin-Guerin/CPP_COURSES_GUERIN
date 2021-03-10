#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Course.h"
using namespace std;

Course :: Course(){} 

void Course :: add_Score(){

    std :: cout << "Entrer votre temps en sec : " ;
    std :: cin >>  _Score_Enregistrer ; 

    std :: cout << "Entrer votre pseudo : " ;
    std :: cin >> _Pseudo_Joueur ;
    
    
    if (_Score_Enregistrer <= _Meilleur_Score[0]){
            _Meilleur_Score[2] =  _Meilleur_Score[1] ;
            _Meilleur_Score[1] =  _Meilleur_Score[0] ;
            _Meilleur_Score[0] = _Score_Enregistrer ;

             _Nom_Meilleur_Score[2] =  _Nom_Meilleur_Score[1] ;
            _Nom_Meilleur_Score[1] =  _Nom_Meilleur_Score[0] ;
            _Nom_Meilleur_Score[0] = _Pseudo_Joueur ;

    }
    else if (_Score_Enregistrer <= _Meilleur_Score[1]){
            _Meilleur_Score[2] =  _Meilleur_Score[1] ;
            _Meilleur_Score[1] =  _Score_Enregistrer ;

            _Nom_Meilleur_Score[2] =  _Nom_Meilleur_Score[1] ;
            _Nom_Meilleur_Score[1] =  _Pseudo_Joueur ;

    }
    else if (_Score_Enregistrer <= _Meilleur_Score[2]){
            _Meilleur_Score[2] =  _Score_Enregistrer ;

            _Nom_Meilleur_Score[2] =  _Pseudo_Joueur ;
    }
    
}

void Course :: calcul_Moyenne() {

    int moyenne ;
    moyenne = (_Meilleur_Score[0] + _Meilleur_Score[1] + _Meilleur_Score[2])/3 ;
    std :: cout <<"La moyenne des scores est de : " << moyenne << std :: endl ;
}

void Course :: affichePseudoMeilleurTemps() {
    string PseudoMT ;
    std::cout<<"Le meilleur joueur est : "<< _Nom_Meilleur_Score[0] <<std::endl ;
}


void Course :: afficheScores() {
    std::cout<<"Les scores sont : "<< std::endl ;

    std::cout<<"1ere place : "<< _Nom_Meilleur_Score[0]<< " | " << _Meilleur_Score[0] << " sec | "<<std::endl ;
    std::cout<<"2eme place : "<< _Nom_Meilleur_Score[1]<< " | " << _Meilleur_Score[1] << " sec |"<<std::endl ;
    std::cout<<"3eme place : "<< _Nom_Meilleur_Score[2]<< " | " << _Meilleur_Score[2] << " sec |"<<std::endl ;

} 

std :: string Course :: getIdentifiant_Course() {
    return _Identifiant_Course ;
 ;

}

std :: string Course :: getPseudo_Joueur() {
    return _Pseudo_Joueur ;
}
