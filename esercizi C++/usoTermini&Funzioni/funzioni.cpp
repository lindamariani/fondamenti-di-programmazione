#include <iostream>
using namespace std;

int fatt(int n){ // int fatt CHIAMATA, n diventa cio che è stato inserito in cin. fatt(5) 2

    int fattoriale=1;
    for(int i=1; i<=n; i++)
        fattoriale = fattoriale*i;

    return fattoriale; // arrivato al return torna al chiamante 3
}

int main(){

    cout << "inserisci: " << endl;
    int c;
    cin >> c; //es 5
    cout << "fattoriale: " << fatt(c) << endl;  //fatt(c) CHIAMANTE 1-4

    return 0;
}
