#include <iostream>
using namespace std;

void revert(char* str){

    int counter = 0;

    while (str[counter] != '\0') {
        counter++;
    }

    char* reversed = new char[counter + 1]; //alloco memoria per il revert

    for (int i = 0; i < counter; ++i) {
        reversed[i] = str[counter - 1 - i];
    }

    // Aggiungi il carattere di terminazione
    reversed[counter] = '\0';

    // Stampa
    for ( int i=0; i < counter; i++){
        cout << reversed[i];
    }
}

int main(){

    char str[50];

    cout << "Inserire una parola: ";
    cin.getline(str, 50);


    cout << "Parola invertita: " ;
    revert(str);

    return 0;
}