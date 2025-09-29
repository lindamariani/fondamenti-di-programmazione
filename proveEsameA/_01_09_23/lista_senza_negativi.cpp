#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void print(node* lst){ 
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

int RemoveNegatives(node* &lst) {
    if (lst == nullptr) {
        cout << "Errore: lista vuota." << endl;
        return -1;
    }

    // Rimuovi i nodi iniziali che hanno valori <= 0
    while (lst != nullptr && lst->data <= 0) {
        node* to_delete = lst;
        lst = lst->next; // Aggiorna la testa
        delete to_delete; // Libera la memoria
    }

    // Controllo per il caso in cui tutti i nodi fossero rimossi
    if (lst == nullptr)
        return 0;

    // Gestione dei nodi successivi
    node* current = lst;
    while (current->next != nullptr) {
        if (current->next->data <= 0) {
            node* to_delete = current->next;
            current->next = current->next->next; // Salta il nodo negativo
            delete to_delete; // Libera la memoria
        } else {
            current = current->next; // Passa al prossimo nodo
        }
    }

    return 1; // Indica che l'operazione è stata completata con successo
}

int main() {
    node* lst = nullptr;

    int x;
    while (true) {
        cout << "Inserire numero (termina con 0): ";
        cin >> x;
        if (x == 0) 
            break;
        AddAtTheEnd(lst, x);
    }

    cout << "Lista originale: ";
    print(lst);

    if (RemoveNegatives(lst) != -1) {
        cout << "Lista aggiornata: ";
        print(lst);
    }

    return 0;
}
