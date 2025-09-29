#include <iostream> 
using namespace std ;

int main () {

    int operazione ;

    do {
        cout << " quale operazione vuoi fare ? " << endl ;
        cout << " 0 - addizione " << endl ;
        cout << " 1 - sottrazione " << endl ;
        cout << " 2 - moltiplicazione " << endl ;
        cout << " 3 - divisione " << endl ;
        cout << " -1 - esci " << endl ;
        cin >> operazione ;
    } while ( operazione < -1 || operazione > 3 ) ;

    if ( operazione == -1 )
        break ;

    int x , y ;
    float z ;

    if ( operazione =! -1 ) {
    cout << " inserire due valori : " << endl ;
    cin >> x >> y ;
    }

    if ( operazione == 0 ) {
        z = x + y ;
        cout << " addizione : " << z << endl ;
    }
    else if ( operazione == 1 ) {
        z = x - y ;
        cout << " sottrazione : " << z << endl ;
    }
    else if ( operazione == 2 ){
        z = x * y ;
        cout << " moltiplicazione : " << z << endl ;
    }
    else {
        z = x / y ;
        cout << " divisione : " << z << endl ;
    }



    return 0 ;

}
