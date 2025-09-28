#include <iostream>
using namespace std;

int main() {

    int numero;
    cout << "di che numero si vuole fare la tavola pitagorica? " << endl;
    cout << "inserire numero: ";
    cin >> numero ;

    while ( numero <= 0 ){
    cout << "input errato" << endl ;
    cout << "inserire un numero intero (>0): " ;
    cin >> numero ;
    }

    int n;
    for (int m=1 ; m<=numero ; m++){
        for (int q=1 ; q<=numero ; q++){
            n=m*q;
            cout << n << " " ;
        }
        cout<<endl;
    }
    return 0;    
}
