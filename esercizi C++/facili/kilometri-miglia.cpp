#include <iostream>
using namespace std ;

//Si scriva un programma in c++ che prende in input una distanza in chilometri e la converta in miglia (1 km = 0.621371 miglia//

int main(){

    float _km ;

    cout << " digitare la distanza in km : " ;
    cin >> _km ;

    float _miglia = _km * 0.621371 ;

    cout << " la distanza di " << _km << " chilometri convertita in miglia e' : " << _miglia << " miglia " << endl ;


    return 0 ;

}
