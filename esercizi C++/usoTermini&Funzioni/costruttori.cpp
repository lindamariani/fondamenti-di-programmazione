#include <iostream>
using namespace std;

class razionale {
    private: 
        int num;
        int den;

    public:
    razionale(){} : razionale(1){}

        razionale(){
            this->num = 1;
            this->den = 1;
        }

        razionale(int n, int d){
            num = n;
            if(den != 0){
               den = d; 
            } else {
                cout << "errore denominatore uguale a zero. " << endl;
            }
            
        }

        void read() {
            int n, d;
            char sep;

            cin >> n >> sep >> d;
            num = n;
            
            if (d == 0){
                cout << "Errore, il denominatore deve essere diverso da zero. " << endl;
                den = 1;
            } else if (sep != '/'){
                cout << "Errore in lettura (separatore errato). " << endl;
            } else
                den = d;
            
        }

        void write() {
            cout << num << "/" << den << endl;
        }

        razionale sum(razionale& other) {
            razionale result;
            result.num = this->num * other.den + other.num * this->den;
            result.den = this->den * other.den;

            return result;
        }

        void simplify() {
            
        }
};

int main() {
    razionale r(); //dichiarazione di funzione locale
    r.write();

/*    razionale r1;
    r1.read();

    razionale r2;
    r2.read();

    razionale r3 = r1.sum(r2);
    r3.write();      */

    return 0;
}
