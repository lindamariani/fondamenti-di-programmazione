 #include <iostream>
 #include <cmath>
 using namespace std ;

 int main () {

    float a , b , c ;
    cout << " inserire primo numero: " ;
    cin >> a ;
    cout << " inserire secondo numero: " ;
    cin >> b ;
    cout << " inserire terzo numero: " ;
    cin >> c ;

    float delta = b*b - 4.0 * a * c ;

    if ( delta > 0) {
        float x1 = ((-1) * b + sqrt(delta)) / (2 * a);
        float x2 = ((-1) * b - sqrt(delta)) / (2 * a);
        cout << " le soluzioni sono : " << x1 << " e " << x2 << endl ;
    }
    else if ( delta == 0 ) {
        float x3 =  ((-1) * b ) / (2 * a) ;
        cout << " la soluzione e' : " << x3 << endl ;
    }
    else 
        cout << " non ci sono soluzioni " << endl ;

return 0; 

 }
