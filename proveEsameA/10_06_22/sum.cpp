/* Scrivere una funzione di tipo int di nome sum che, preso come parametro una lista concatenata
 semplice l i cui elementi hanno campo informazione di tipo int, e un intero m, restituisce la somma dei soli valori della
 lista che sono multipli di m. Se la lista e vuota, la funzione ritorna il valore 0.*/
 #include <iostream>
 using namespace std;
 

 struct node {
    int data;
    node* next;
 } ;

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

 int sum(node* lst, int m){
    if (lst == nullptr)
        return 0;

    int somma = 0;
    while (lst->next != nullptr){
        if (lst->data % m == 0){
            somma += lst->data;
        }
        lst = lst->next;
    }

    if (somma == 0)
        return 0;
    else
        return somma;

 }

 int main(){
    node* lst = nullptr;

    int x;
    do {
        cout << "Inserire numero (negativo per terminare): ";
        cin >> x;
        if (x > 0)
            AddAtTheEnd(lst, x);
    } while(x > 0);

    int m;
    do {
        cout << "Inserire multiplo: ";
        cin >> m;
    } while(x > 0);

    cout << "Lista inserita: ";
    print(lst);

    
    
    cout << "Somma dei multipli di " << m << ": " << sum(lst, m);



    return 0;
 }
