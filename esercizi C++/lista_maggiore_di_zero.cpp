#include <iostream>
using namespace std;

/*Scrivere una funzione che preso come argomento una lista semplicemente
concatenata, ritorni una nuova lista che contiene solamente gli elementi della lista
strettamente maggiori di zero*/

struct node {
    int data;
    node* next;
};

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

node* greaterThanZero(node* lst){
    if (lst == nullptr)
        return lst;

    node* result = nullptr;

    while(lst != nullptr){
        if (lst->data > 0)
            AddAtTheEnd(result, lst->data);
        lst = lst -> next;
    }
    return result;
}

bool equals(node* l1, node* l2){
    if(l1 == l2 && l2==nullptr)
        return true;
    else if(l1==nullptr || l2==nullptr)
        return false;

    return l1->data == l2->data &&  equals(l1->next, l2->next);
}

void deletelst(node* lst){ // per deallocare
    while(lst != nullptr){
        node* tmp = lst;
        lst = lst->next;
        delete tmp;
    }
}

void deletelstRec(node* lst){
    if(lst == nullptr)
        return;
    deletelstRec(lst->next);
    delete lst;
}

bool contains(node* lst, int e){
    while(lst != nullptr){
        if(lst->data == e)
        return true;
    lst = lst->next;
    }
    return false;
}

int maxRec(node* lst){
    if(lst == nullptr)
        return -1;
    else if(lst->next == nullptr)
        return lst-> data;
    else{
        int max_tmp = maxRec(lst->next);
        if(max_tmp > lst->data)
            return max_tmp;
        else
            return lst->data;
    }
}

void printReverse(node* lst){ //stampare una lista al contrario 1234 --> 4321
    if(lst == nullptr)
        return;
    else if(lst->next == nullptr) //se un unico elemento
        cout << lst->data << " ";
    else {
        printReverse(lst->next);
        cout << lst->data << " ";
    }
} 

int lenght(node* lst){
    if(lst == nullptr)
        return 0;
    else
        return 1 + lenght(lst->next);
}

int sumRec(node* lst){
    if(lst == nullptr)
        return 0;
    else
        return lst->data + sumRec(lst->next);
}

void concat(node* &l1, node* l2){
    if(l1 == nullptr)
        l1 = l2;
    else {
        node* cursor = l1;
        while(l1->next != nullptr)
            cursor = cursor->next;
        cursor->next = l2;
    }
}

node* concat2(node* l1, node* l2){
    node* r = nullptr;

    while(l1 != nullptr){
        AddAtTheEnd(r, l1->data);
        l1 = l1->next;
    }

    while(l2 != nullptr){
        AddAtTheEnd(r, l2->data);
        l2 = l2->next;
    }
    return r;
}

void removeAll( node* lst, int e){ //per cancellare tutte le e nella lista
    while(lst != nullptr && lst->data == e){
        node* tmp = lst;
        lst = lst->next;
        delete tmp;
    }
    
    if(lst != nullptr){
        node* cursor = lst;
        while(cursor->next != nullptr) {
            if(cursor->next->data == e){
                node* new_next = cursor->next->next; //in 1232 è 3
                delete cursor->next;
                cursor->next = new_next;
            } else 
                cursor = cursor->next; //per muovere il cursore nelle liste
        }
    }
}


/*Scrivere una funzione di nome rotate che, preso come parametro una lista
semplicemente concatenata effettua una ”rotazione in avanti” della lista: la rotazione
dovrà spostare l’ultimo elemento della lista nella posizione in testa. */
void lastForFirst(node* &lst){
    if(lst == nullptr || lst->next == nullptr)
        return;

    node* cursor = lst;
    node* prev = nullptr;

    while(cursor->next != nullptr){
        prev = cursor;
        cursor = cursor->next;
    }
    prev->next = nullptr; //ultimo nodo
    cursor->next = lst;
    lst = cursor;
}


/*Scrivi una funzione in C++ che, data una lista semplicemente concatenata e due
indici start e end (0-based, con start <= end), restituisce una nuova lista che
rappresenta la sottolista che va dall’indice start all’indice end inclusi*/
node* sublist(node* lst, int start, int end){
    if(start < 0 || end < 0 || start < end){
        return nullptr;
    }
    node* new_lst = nullptr;
    int index= 0;
    while(lst != nullptr){
        if(index >= start && index <= end){
            AddAtTheEnd(new_lst, lst->data);
        } else if (index > end)
            break;

        index++;
        lst = lst ->next;
    }
    return new_lst;
}

//nullpointer in testa
void null_head(node* lst){}

int main(){
    node* lst= nullptr;

    AddAtTheEnd(lst, 1);
    AddAtTheEnd(lst, -1);
    AddAtTheEnd(lst, 2);
    AddAtTheEnd(lst, -2);
    AddAtTheEnd(lst, 3);
    AddAtTheEnd(lst, -3);

    print(lst);
    node* other_lst= greaterThanZero(lst);
    print(other_lst);

    node* another_lst = nullptr;
    AddAtTheEnd(another_lst, 1);
    AddAtTheEnd(another_lst, 2);
    AddAtTheEnd(another_lst, 3);
    
    cout << equals(other_lst, another_lst) << endl;
    printReverse(another_lst);

    removeAll(another_lst, 2);

    lastForFirst(another_lst);


    deletelstRec(other_lst);
    deletelstRec(another_lst);
    deletelstRec(lst);

    

    return 0;
}