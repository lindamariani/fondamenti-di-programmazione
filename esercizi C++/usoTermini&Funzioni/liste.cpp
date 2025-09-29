#include <iostream>
using namespace std;

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

void printrec(node* lst){
    if(lst==nullptr)
        return;
    else{
        cout << lst->data << " ";
        printrec(lst->next);
        cout << endl;
    }
}

void addatthebeginning(node* &lst, int x){
    node* new_node= new node;
    new_node->next =lst;
    new_node->data =x;
    lst=new_node;
}

void addattheend(node* &lst, int x){
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

void RemoveAtTheBeginning(node* &lst){
    if(lst==nullptr){
        cout << "non ce niente" << endl;
        return;
    } 
    node* new_lst=lst->next;
    delete lst;
    lst= new_lst;
}

void RemoveAtTheEnd(node* &lst){
    if(lst==nullptr){
        cout << "non ce niente" << endl;
        return;
    } else if(lst->next==nullptr) {
        RemoveAtTheBeginning(lst);
    } else {
        node* cursor=lst;
        while(cursor->next->next != nullptr){
            cursor=cursor->next;
        }
            delete cursor->next;
            cursor->next= nullptr;
        
    }
}

void remove(node* &lst, int e){ //per cancellare un elemento della lista
    if(lst==nullptr){
        cout << "non ce niente" << endl;
        return;
    } else if (lst->data==e){
        RemoveAtTheBeginning(lst);
    } else {
        node* cursor=lst;
        node* prev;
        while(cursor!= nullptr && cursor->data != e){
            prev=cursor;
            cursor=cursor->next;
        }
        if(cursor!=nullptr){
            prev->next=prev->next->next;
            delete cursor;
        }
    }
}

int main(){
    node* lst = nullptr; //lista vuota

    addatthebeginning(lst, 0);
    addatthebeginning(lst, 1);
    addatthebeginning(lst, 2);
    addatthebeginning(lst, 56);
    addatthebeginning(lst, 17);
    addatthebeginning(lst, 8);

    print(lst);
    addattheend(lst,5);
    print(lst);
    RemoveAtTheBeginning(lst);
    print(lst);
    RemoveAtTheEnd(lst);
    print(lst);

    remove(lst, 2);
    print(lst);

    return 0;
}
