#include <iostream>
using namespace std ;

int main () {
    int a, b ;
    cout << "inserire il primo numero " ;
    cin >> a ;
    cout << "inserire il secondo  numero " ;
    cin >> b ;
    int totale= 0 ;

    while ( (a+b) < 0 ){
    cout << "valore errato " << endl ;
    cout << "reinserire i numeri : " ;
    cin >> a >> b ;
    }

    if (a>b){
        int c=a;
        a=b;
        b=c;
    } else {}

    int trovato=0;
    for ( int g=a ; g<=b ; g++ ){
        totale=0;
            for (int n=1; n<= g/2 ; n++){
                if ( g%n == 0 ) {
                totale= totale+n ;
                }
            }
            if (totale == g && g != 0){
                cout << g << "; ";
                trovato=1;
            } 
    }

    if ( trovato==0)
        cout << "nessun numero perfetto nell'intervallo ";
    
    return 0 ;
}