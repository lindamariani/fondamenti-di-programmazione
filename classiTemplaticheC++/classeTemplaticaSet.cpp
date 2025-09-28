/*Definire una classe templatica Set<T> che realizza il tipo di dato astratto insieme di elementi
di tipo T. La classe deve definire:
▶ un costruttore senza argomenti che crea un insieme vuoto
▶ un metodo void add(T value) che aggiunge un elemento all’insieme. Se l’elemento `e gi`a presente, il metodo deve
lanciare un’eccezione
▶ un metodo int size() const che ritorna la cardinalit`a dell’insieme
▶ un metodo bool contains(const T& value) const che ritorna true se l’elemento `e presente nell’insieme su cui `e
invocato il metodo, false altrimenti.
▶ un metodo Set<T> intersect(const Set<T>& other) const che ritorna un nuovo insieme che rappresenta l’intersezione
dell’insieme su cui `e invocato il metodo con un altro insieme other.
Si sovraccarichi l’operatore << in modo tale che stampi gli elementi dell’insieme su uno stream di output fout nel formato {e1, e2, . . . , en}. Non `e consentito utilizzare classi della STL. Se necessario, ridefinire gli opportuni metodi, costruttori
e/o operatori. Specificare opportunamente eventuali metodi e parametri costanti. Massimizzare incapsulamento e information hiding.*/

#include <iostream>
using namespace std;

class AlreadyExistsException {
    public:
        const char* what() const {
            return "Elemento già presente! ";
        }
};

template <typename T>
class Set {
    private:
        T* elementi;
        int capacita;
        int n;

        void resize() {
            capacita *= 2;
            T* nuovo = new T[capacita];
            for(int i = 0; i < n; i++) {
                nuovo[i] = elementi[i];
            }
            delete elementi[];
            elementi = nuovo;
        }

    public:
        Set() {
            capacita = 10;
            elementi = new T[capacita];
            n = 0;
        }

        void add(const T value) {
            if(contains(x)) throw AlreadyExistsException();
            if(n == capacita) resize();
            
            elementi[n++] = value;
        }

        int size() {
            return n;
        }

        bool contains(const T& value) {
            if(n == 0) return false;
            for(int i = 0; i < n; i++) {
                if(elementi[i] == x) return true;
            }
            return false;
        }

        Set<T> intersect(const Set<T>& other) const {
            Set<T> unito;

            for(int i = 0; i < n; i++) {
                unito[i] = elementi[i];
            }

            for(int i = 0; i < other.n; i++) {
                 if(!unito.contains(other.elementi[i])) {
                    unito.add(other.elementi[i]);
                }
            }
            return unito;
        }
};

template <typename T>
ostream& operator<<(ostream& out, const Set<T>& set) {
    out << "{ ";
    for(int i = 0; i < set.n; i++) {
        out << set.elementi[i];
        if(i < set.size() - 1) out << ", ";
    }
    out << " }";

    return out;
}
