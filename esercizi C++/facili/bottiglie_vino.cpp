#include <iostream>
using namespace std;

int main () {

    int _vino ;

    cout << " inserire numero di bottiglie : " ;
    cin >> _vino ;

    float _tot = _vino * 15 ;

    if (_vino > 50) 
        cout << " il prezzo e' : " << _tot - _tot * 0.18 << endl ;
    
    else 
        cout << " il prezzo e' : " << _tot << endl ;
    


    return 0;

}
