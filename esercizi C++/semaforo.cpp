#include <iostream>
using namespace std;

class semaforo {
    private:
        int colore; //proprieta

        bool valido(int c) {
            return c >= 0 && c <= 2;
        }


    public:
        void cambiaColore(int c) {
            if (valido(c))
                this->colore = c; //accedi alla proprieta colore di this oggetto e assegna valore c
            else
               this->colore = 0; 
        }

        void stampa() {
            cout << "Colore: ";
            if (colore == 0){
                cout << "Rosso. "<< endl ;
            } else if (colore == 1){
                cout << "Verde."<< endl;
            } else if (colore == 2){
                cout << "Arancione."<< endl;
            } else
                cout << "Errore!" << endl;
        }
};

int main() {
    semaforo s;
    s.cambiaColore(0);
    s.cambiaColore(5616544);

    s.stampa();

    semaforo s2;
    s2.cambiaColore(2);
    s2.stampa();

    return 0;
}