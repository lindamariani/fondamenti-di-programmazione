#include <iostream>
using namespace std;

#define MAX_LENGHT 5

int main(){

    char str[MAX_LENGHT];
    cout << "inserire una stringa: ";
    cin.getline(str, MAX_LENGHT, '\n');

    cout << cin.fail() << endl; /*segnala se sono stati inseriti troppo caratteri, se non lo metti si ferma ad hell se inserisci helloworld*/

    int v=0;
    for (int i=0; i<str[i]!='\0'; i++)
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            v++;

    cout << "il numero di vocali in " << str << " e': " << v << endl;

    /* char o[MAX_LENGHT];
    cin >> o;
    cout << o;  PER LA SECONDA PAROLA */

    return 0;
}
