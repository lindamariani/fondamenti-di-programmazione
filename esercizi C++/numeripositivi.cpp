#include <iostream>
using namespace std ;

int main () {

    int i ;

    for ( i = 100 ; i >= 5 ; i--)
        if ( i % 5 == 0)
            cout << i << endl ;

    return 0 ;
}