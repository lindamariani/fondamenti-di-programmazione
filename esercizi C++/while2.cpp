#include <iostream>
using namespace std ;

int main () { 

    int n = -1 ;

    while ( n < 0 ) {
        cout << " quante volte vuoi stampare ? " << endl ;
        cin >> n ;
    }

    int counter = 0 ;

    while ( counter < n ) {
        cout << " ***** " << endl ;
        counter++ ;
    }

    return 0 ;
}