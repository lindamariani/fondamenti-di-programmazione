#include <iostream>
using namespace std;

class tv{
    private:
        bool on;
        int volume;
        int canale;

        tv(bool on, int volume, int canale) {
            if(canale < 0 || canale > 10) {
                cout << "errore. " << endl;
                this->canale = 7;
            } else {
                this->canale = canale;
            }

            if(volume < 0 || volume > 10) {
                cout << "errore. " << endl;
                this->volume = 5;
            } else {
                this->volume = volume;
            } 
        }

    public:
        tv(int canale) : tv(true, 5, canale) {}

        tv(int canale, int volume) : tv(true, volume, canale) {}

        void accendi(){
            if(on){
                cout << "tv accesa. " << endl;
            } else  
                on = true;
        }

        void impostaCanale(int canale) {
            if(on) {
                if(canale < 0 || canale > 99){
                    cout << "errore. " << endl;
                } else  
                    canale = canale;
            }
        }

        void canaleSuccessivo() {
            if (canale == 0) {
                canale = 99;
            } 

        }


        bool validaCanale(int canale) {
            return canale >= 0 && canale <= 99;
        }

        void print(){
            if(on) {
                cout << "Canale: " << canale << endl;
                cout << "Volume: " << volume << endl;
            }
        }

};

int main(){

    return 0;
}