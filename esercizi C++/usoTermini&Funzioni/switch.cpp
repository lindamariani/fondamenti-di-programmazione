#include <iostream>
using namespace std;

int main(){

    int n;

    do{
    cout << "inserire numero mese (1-12): ";
    cin >> n;
    }
    while (n<1 || n>12);

switch (n) {
    case 1: cout << "gennaio" << endl; break;
    case 2: cout << "febbraio" << endl; break;
    case 3: cout << "marzo" << endl; break;
    case 4: cout << "aprile" << endl; break;
    case 5: cout << "maggio" << endl; break;
    case 6: cout << "giugno" << endl; break;
    case 7: cout << "luglio" << endl; break;
    case 8: cout << "agosto" << endl; break;
    case 9: cout << "settembre" << endl; break;
    case 10: cout << "ottobre" << endl; break;
    case 11: cout << "novembre" << endl; break;
    case 12: cout << "dicembre" << endl; break;
    default: cout << "mese invalido" << endl;
}
return 0;
}
