#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int check(node* lst, int dim, int x){
    if(dim == 0)
        return -1;
    else if(dim == 1 && lst->data == x)
        return 1;

    int count = 0; // Conta le sottosequenze con somma pari a x

    // Scorro ogni nodo della lista come punto di partenza
    for (node* start = lst; start != nullptr; start = start->next) {
        int somma = 0;

        // Sommo i valori a partire dal nodo `start`
        for (node* current = start; current != nullptr; current = current->next) {
            somma += current->data;

            // Se la somma è uguale a x, incremento il contatore
            if (somma == x) {
                count++;
            }
        }
    }

    return count;
}

void print(node* lst){ //node* che punta alla testa della lista
    while(lst != nullptr){
        cout << lst->data << " ";
        lst= lst->next;
    }
    cout << endl;
}

void addatthebeginning(node* &lst, int x){
    node* new_node= new node;
    new_node->next =lst;
    new_node->data =x;
    lst=new_node;
}

void AddAtTheEnd(node* &lst, int x){
    if(lst==nullptr)
        addatthebeginning(lst,x);
    else{
        node* new_node= new node;
        new_node->data=x;
        new_node->next=nullptr;

        node* cursor=lst;

        while(cursor->next !=nullptr)
            cursor=cursor->next;

        cursor->next= new_node;
    }
}

int main(){

    node* lst = nullptr;

    AddAtTheEnd(lst, 1);
    AddAtTheEnd(lst, 10);
    AddAtTheEnd(lst, 4);
    AddAtTheEnd(lst, 2);

    print(lst);

    int a = check(lst, 4, 3);

    cout << "Il numero di sequenze che da come risultato 3 e' : " << a << endl;

    return 0;
}
