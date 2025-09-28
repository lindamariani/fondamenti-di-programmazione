#include <iostream>
using namespace std;

template <typename T>
class MultiSet {
private:
    T* elementi;    // array degli elementi distinti
    int* conti;     // array dei conteggi
    int capacita;   // capacità massima dell'array
    int n;          // numero di elementi distinti presenti

    // aumenta la capacità
    void resize() {
        capacita *= 2;
        T* nuovoElementi = new T[capacita];
        int* nuoviConti = new int[capacita];

        for (int i = 0; i < n; i++) {
            nuovoElementi[i] = elementi[i];
            nuoviConti[i] = conti[i];
        }

        delete[] elementi;
        delete[] conti;

        elementi = nuovoElementi;
        conti = nuoviConti;
    }

    // trova l'indice di un elemento, -1 se non presente
    int indiceDi(const T& valore) const {
        for (int i = 0; i < n; i++) {
            if (elementi[i] == valore) return i;
        }
        return -1;
    }

public:
    // costruttore
    MultiSet() {
        capacita = 10;
        elementi = new T[capacita];
        conti = new int[capacita];
        n = 0;
    }

    // distruttore
    ~MultiSet() {
        delete[] elementi;
        delete[] conti;
    }

    // verifica se il multi-insieme è vuoto
    bool isEmpty() const {
        return n == 0;
    }

    // aggiunge un elemento
    void add(T value) {
        int idx = indiceDi(value);
        if (idx != -1) {
            conti[idx]++;   // elemento già presente, aumento occorrenze
        } else {
            if (n == capacita) resize();
            elementi[n] = value;
            conti[n] = 1;
            n++;
        }
    }

    // ritorna quante volte compare un elemento
    int cardinality(const T& value) const {
        int idx = indiceDi(value);
        return (idx != -1) ? conti[idx] : 0;
    }

    // intersezione tra due multi-insiemi
    MultiSet<T> intersection(const MultiSet<T>& other) const {
        MultiSet<T> nuovo;
        for (int i = 0; i < n; i++) {
            T x = elementi[i];
            int occInOther = other.cardinality(x);
            if (occInOther > 0) {
                int minOcc = (conti[i] < occInOther) ? conti[i] : occInOther;
                for (int j = 0; j < minOcc; j++) {
                    nuovo.add(x);
                }
            }
        }
        return nuovo;
    }
};
