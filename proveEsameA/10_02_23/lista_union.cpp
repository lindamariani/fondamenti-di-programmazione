/* Scrivere una funzione di nome union che, presi come suoi parametri due liste concatenate semplici
 l1 ed l2 i cui elementi hanno campo informazione di tipo int, ritorni come risultato lunione delle due liste, ovvero una
 nuova lista contenente tutti gli elementi delle liste l1 e l2 senza ripetizioni.*/

 #include <iostream>
 using namespace std;

 struct node{
    int data;
    node* next;
 };

 void print(node* lst){
    while (lst != nullptr){
        cout << lst->data << " ";
        lst = lst->next;
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

void unione(node* lst1, node* lst2){
    if (lst1 == nullptr) { 
        lst1 = lst2;
        return;
    }
    node* temp = lst1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = lst2;

    
    node* current = lst1;
    while (current != nullptr) {
        node* runner = current;
        while (runner->next != nullptr) {
            if (current->data == runner->next->data) {  // Duplicato trovato
                node* to_delete = runner->next;
                runner->next = runner->next->next;  // Salta il duplicato
                delete to_delete;  // Libera la memoria del nodo duplicato
            } else {
                runner = runner->next;  // Passa al nodo successivo
            }
        }
        current = current->next;  // Passa al prossimo nodo principale
    }
    

}

 int main(){
    int x;

    node* lst1 = nullptr;
    cout << "CREAZIONE LISTA 1. " << endl;
    while(true){
        cout << "Inserire numero (negativo per terminare) ";
        cin >> x;
        if (x < 0)
            break;
        AddAtTheEnd(lst1, x);
    }  

    node* lst2 = nullptr;
    cout << "CREAZIONE LISTA 2. " << endl;
    while(true){
        cout << "Inserire numero (negativo per terminare): ";
        cin >> x;
        if (x < 0)
            break;
        AddAtTheEnd(lst2, x);
    }  

    cout << "Lista 1: ";
    print(lst1);
    cout << "Lista 2: ";
    print(lst2);

    unione(lst1, lst2);
    cout << "Lista unica senza ripetizioni: ";
    print(lst1);


    return 0;
 }