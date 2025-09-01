#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

//Per controllare se ci sono sequenze crescenti
int checkSeq(node* lst){ 
    if(lst == nullptr || lst->next == nullptr)
        return -1;
    
    int first = lst->data;
    
    while(lst->next != nullptr){
        if (lst->data < lst->next->data){
        } else {
            first = lst->next->data;
        }

        lst = lst->next;
    }

    if (first == lst->data)
        return -1;
    else
        return first;
        
}

//Per segnare il numero della cella in cui è il pointer
int cella(node* lst){
    if(lst == nullptr || lst->next == nullptr)
        return -1;
    
    int first = lst->data;
    int counter = 1;
    int cella = 0;
    
    while(lst->next != nullptr){
        if (lst->data < lst->next->data){
        } else {
            first = lst->next->data;
            cella = counter;
        }
        counter++;
        lst = lst->next;
        
    }
    return cella;
}

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

void deletelstRec(node* lst){
    if(lst == nullptr)
        return;
    deletelstRec(lst->next);
    delete lst;
}


int main(){

    node* lst = nullptr;

    /* AddAtTheEnd(lst, 2);
    AddAtTheEnd(lst, 4);
    AddAtTheEnd(lst, 1);
    AddAtTheEnd(lst, 2);
    AddAtTheEnd(lst, 3); */    //<------CON LISTA FISSA

    //Con lista creata dall'utente
    int x;
    while (true) {
        cout << "Inserisci numero (termina con numero negativo):" ;
        cin >> x;
        if (x < 0) 
            break;
        AddAtTheEnd(lst, x);
    }

    int controllo = checkSeq(lst);

    if(controllo>=0)
        cout << "Pointer in numero: " << checkSeq(lst) << " || Cella numero (parte da 0) : " << cella(lst) << endl;
    else
        cout << "Puntatore nullo. " << endl;

    print(lst);

    deletelstRec(lst);
    
    return 0;
}
