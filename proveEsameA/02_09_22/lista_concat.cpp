#include <iostream>
using namespace std;

struct node {
    char data;
    node* next;
};

void print(node* lst) {
    while (lst != nullptr) {
        cout << lst->data << " ";
        lst = lst->next;
    }
    cout << endl;
}

void addatthebeginning(node*& lst, char x) {
    node* new_node = new node;
    new_node->data = x;
    new_node->next = lst;
    lst = new_node;
}

void AddAtTheEnd(node*& lst, char x) {
    if (lst == nullptr) {
        addatthebeginning(lst, x);
    } else {
        node* cursor = lst;
        while (cursor->next != nullptr) {
            cursor = cursor->next;
        }
        node* new_node = new node;
        new_node->data = x;
        new_node->next = nullptr;
        cursor->next = new_node;
    }
}

void concat(node*& l1, node* l2) {
    if (l1 == nullptr) { 
        // Se l1 è vuota, punta direttamente a l2
        l1 = l2;
        return;
    }
    // Caso base: se siamo all'ultimo nodo di l1, collega a l2
    if (l1->next == nullptr) {
        l1->next = l2;
        return;
    }
    // Chiamata ricorsiva sul nodo successivo
    concat(l1->next, l2);
}

void deleteList(node*& lst) {
    while (lst != nullptr) {
        node* temp = lst;
        lst = lst->next;
        delete temp;
    }
}

int main() {
    node* l1 = nullptr;
    node* l2 = nullptr;
    char x;

    // Creazione prima lista
    cout << "Inserire la prima lista di lettere: " << endl;
    do {
        cout << "Digita 0 per terminare la lista: ";
        cin >> x;
        if (x != '0') {
            AddAtTheEnd(l1, x);
        }
    } while (x != '0');

    // Creazione seconda lista
    cout << "Inserire la seconda lista di lettere: " << endl;
    do {
        cout << "Digita 0 per terminare la lista: ";
        cin >> x;
        if (x != '0') {
            AddAtTheEnd(l2, x);
        }
    } while (x != '0');

    // Output liste non concatenate
    cout << "Prima lista: ";
    print(l1);
    cout << "Seconda lista: ";
    print(l2);

    // Concatenazione
    concat(l1, l2);

    // Output concatenato
    cout << "Lista concatenata: ";
    print(l1);

    // Deallocamento memoria
    deleteList(l1);

    return 0;
}
