#include <iostream>
using namespace std;

class dado{
    private:
        int n_facce;
        int ultimo_lancio;
    public:
        dado(){
            this->n_facce = 0;
            this->ultimo_lancio = 0;
        }

        dado(int n_facce){
            if (n_facce < 2)
                throw invalidArgument("Numero facce invalido"); //throw è uno statement, una key word
            this->n_facce = n_facce;
        }

        void reset(){
            this->ultimo_lancio = 0;
        }

        int lancia(){
            //rand() //genera un numero casuale tra 0 e 32.000 e qualcosa
            this->ultimo_lancio = (rand() % n_facce) + 1; //cosi random da 1 a 6
            return this->ultimo_lancio;
        }

        int lancioTruccato(){
            int l = (rand() % (n_facce + n_facce / 2)) + 1;
            this->ultimo_lancio = l <= n_facce? l : 5;
            return this->ultimo_lancio;
        }
};

int main(){
    srand(time(0));
    dado d;

    int lanci[6] = {0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 100000; i++){
        lanci[d.lancia() - 1]++;
    }

    for (int i = 0 ; i < 10; i++)
        cout << (i + 1) << ": " << lanci[i] << endl;

    return 0;
}
