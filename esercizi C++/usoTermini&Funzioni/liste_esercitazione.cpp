#include <iostream>
using namespace std;

/*. Scrivere una funzione che prende in input una lista e un valore e controlla se il valore è
contenuto nella lista*/

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
    else if(lst-->next == nullptr) //se un unico elemento
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

int main(){

    printReverse(another_lst);

    return 0;
}
