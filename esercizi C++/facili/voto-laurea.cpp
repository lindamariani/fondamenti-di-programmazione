#include <iostream>
using namespace std ;

#define MAX_VOTI 50

int main () {

    int voti [MAX_VOTI];
    int len= 0;

    do {
       cout << "inserire voto (per interrompere -1): " ;
        cin >> voti [len];
        len++;
    } while (voti[len-1] != -1);

    for ( int j = 0 ;j < len-1 ; j++ ){
        cout << voti[j] << endl;
        
    }

    return 0;
}
