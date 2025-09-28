#include <iostream>
using namespace std ;

/*Si scriva un programma in C++ che chide all'utente di inserire la propria data di
 nascita (solo l'anno) e calcola la sua età, assumendo che l'anno attuale sia 2024.*/

int main(){

    int _anno ;

    cout << " digitare anno di nascita : " ;
    cin >> _anno ;

    int _eta = 2024 - _anno ;

    cout << " l'eta' e' di " << _eta << " anni " << endl ;


    return 0 ;

}