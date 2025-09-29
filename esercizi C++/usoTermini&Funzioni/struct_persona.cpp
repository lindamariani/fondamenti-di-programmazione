#include <iostream>
using namespace std;

struct persona{
        char nome[32];
        char cognome[32];
        int eta;
    } ;

int main (){

    persona me= {"Linda", "Mariani", 21};
    persona altra_persona= ["Mario", "Rossi", 35];
    persona sconosciuto;

    cout << me nome << endl;
    cout << me cognome << endl;
    cout << me eta << endl;

    return 0;
}
