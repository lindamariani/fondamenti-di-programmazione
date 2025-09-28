#include <iostream>
using namespace std ;

int main () {

    int numero ;
    cout << " inserirre un numero intero positivo : " ;
    cin >> numero ;

    int c ;
    int somma = 0 ;

    while ( numero > 0 ){
        c = numero % 10 ; //es 1234%10=4 -- 123%10= 3 -- 12%10=2 -- 1%10=1
        somma= somma + c ; // 4+0=4 -- 4+3=7 -- 7+2=9 -- 9+1=10
        numero= numero / 10 ; // 1234/10=123 -- 123/10= 12 - 12/10=1-- 1/10=0

        cout << c << endl ;
    }

    cout << " la somma delle cifre e' : " << somma << endl ;

    return 0 ;
}