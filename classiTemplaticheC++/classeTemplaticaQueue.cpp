/*. Definire una classe templatica Queue<T> che realizza il tipo di dato astratto coda di elementi
di tipo T che permette di inserire un nuovo elemento in coda e di rimuovere un elemento dalla testa della coda (FIFO:
First In First Out). La classe deve definire:
I un costruttore senza argomenti che crea una coda vuota
I un metodo enqueue che, preso come argomento elem, aggiunge elem in coda
I un metodo dequeue che rimuove l’elemento in testa alla coda e lo restituisce. Se la coda `e vuota, il metodo deve
lanciare un’eccezione.
I un metodo isEmpty che controlla se la coda `e vuota
Si sovraccarichi l’operatore << in modo tale che stampi gli elementi della coda su uno stream di output fout nel formato
[e1, e2, . . . , en]. Non `e consentito utilizzare classi della STL. Se necessario, ridefinire gli opportuni metodi, costruttori e/o
operatori. Specificare opportunamente eventuali metodi e parametri costanti. Massimizzare incapsulamento e information
hiding.
*/

#include <iostream>
using namespace std;

template <typename T>
class Queue {
    private:
        T* elementi;
        int capacita;
        int topIndex;

        void resize() {
            capacita *= 2;
            T* nuovo = new T[capacita];

            for(int i = 0; i <= topIndex; i++) {
                nuovo[i] = elementi[i];
            }
            delete[] elementi;
            elementi = nuovo;
        }

    public: 
        Queue() {
            capacita = 10;
            elementi = new T[capacita];
            topIndex = -1;
        }

        void enqueue(int elem) {
            if(topIndex + 1 == capacita) resize();

            elementi[topIndex++] = elem;
        }

        T dequeue() {
            if(topIndex == -1) {
                throw RuntimeException("La coda è vuota! ");
            }
            
            T tmp = elementi[0];
            for(int i = 0; i < topIndex; i++) {
                elementi[i] = elementi[i + 1];
            }
        
            topIndex--;

            return tmp;
        }

        bool isEmpty() {
            return topIndex == -1;
        }

        int size() {
            return topIndex;
        }

};

template <typename T> 
ostream& operator<<(ostream& out, const Queue<T>& queue) {
    out << "[ ";
    for(int i = 0; i < queue.size(); i++) {
        out << queue.get(i);
        if(i < queue.size()) out << ", ";
    }
    out << " ]";
}
