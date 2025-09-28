/*Definire una classe templatica Stack<T> che realizza il tipo di dato astratto pila di elementi
di tipo T (accesso di tipo LIFO: Last In First Out). La classe deve definire:
▶ un costruttore senza argomenti che crea una pila vuota;
▶ un metodo push che aggiunge un elemento di tipo T alla pila;
▶ un metodo isEmpty che controlla se la pila `e vuota.
▶ un metodo pop che rimuove dalla pila l’ultimo elemento inserito e lo ritorna come risultato. Il metodo deve lanciare
un’eccezione se la pila `e vuota.
▶ un metodo size che ritorna il numero di elementi nella pila
Si sovraccarichi l’operatore << in modo tale che stampi gli elementi della pila su uno stream di output fout nel formato
[e1, e2, . . . , en]. Non `e consentito utilizzare classi della STL. Se necessario, ridefinire gli opportuni metodi, costruttori e/o
operatori. Specificare opportunamente eventuali metodi e parametri costanti.*/

#include <iostream>
using namespace std;

class PilaVuotaException {
    public:
        const char* what() const {
            return "La pila è vuota! ";
        }
};

template <typename T>
class Stack {
    private:
        T* elementi;
        int capacita;
        int topIndex;

        void resize(int newCapacita) {
            T* nuovo = new T[newCapacita];
            for(int i = 0; i <= topIndex; i++) {
                nuovo[i] = elementi[i];
            }
            delete[] elementi;
            elementi = nuovo;
            capacita = newCapacita;
        }

    public:
        Stack() {
            capacita = 10;
            elementi = new T[capacita];
            topIndex = -1;
        }

        ~Stack() {
            delete[] elementi;
        }

        void push(const T& val) {
            if(topIndex + 1 == capacita)
                resize(capacita * 2);
            
                elementi[topIndex++] = val;
        }

        bool isEmpty() const {
            return topIndex == -1;
        }

        T pop() {
            if (isEmpty()) {
                throw PilaVuotaException();
            }
            return elementi[topIndex--];
        }

        int size() const {
            return topIndex + 1;
        }

        T get(int index) const {
            return elementi[index];
        }
};

template <typename T>
ostream& operator<<(ostream& out, const Stack<T>& stack) {
    out << "{ ";
    for(int i = 0; i < stack.size(); i++) {
        out << stack.get(i);
        if(i < stack.size() - 1) 
            out << ", ";
    }
    out << " } ";
    return out;
}

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << s << std::endl;  // stampa: [10, 20, 30]

    s.pop();
    std::cout << s << std::endl;  // stampa: [10, 20]

    return 0;
}
