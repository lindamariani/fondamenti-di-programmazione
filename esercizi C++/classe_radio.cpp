#include <iostream>
using namespace std;

class radio {
    private:
        float frequenza;
        bool accesa;
        int volume;

    public:

/*      radio(){
            this->accesa = true;
            this->frequenza = 102.5;
            this->volume = 5;
        }                                        */

        void pulsanteOn(){
            this->accesa = !this->accesa;
        }

        void aumentaVolume(){
            if (this->accesa){
                if (volume < 10){
                    this->volume++;
                } else 
                    cout << "Volume massimo raggiunto! " << endl;
            }
        }

        void diminuisciVolume(){
            if (this->accesa){
                if (volume > 0){
                    this->volume--;
                } else 
                    cout << "Volume minimo raggiunto! " << endl;
            }
        }

        void print(){
            if (this->accesa){
                cout << "Volume: " << this->volume << endl;
                cout << "Frequenza: " << this->frequenza << endl;
            }
        }
};

int main() {
    radio r;
    r.print();

    return 0;
}