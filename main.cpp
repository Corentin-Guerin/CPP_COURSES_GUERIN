#include <iostream>
#include <string>
#include <vector>
#include "Course.cpp"                   

using namespace std;

int main()
{

    Course course1 = Course();

    course1.add_Score() ;
    course1.calcul_Moyenne() ;
    course1.affichePseudoMeilleurTemps() ;
    course1.afficheScores() ;


}
    
