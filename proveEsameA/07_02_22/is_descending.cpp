/*Scrivere una funzione di tipo bool di nome isDescending che, preso come suo parametro una
 lista concatenata semplice l i cui elementi hanno campo informazione di tipo int, controlli se la lista e strettamente
 descrescente. Ad esempio, se l = 12,3,-5,-7 , la funzione isDescending ritorna true, se l = 12, 3, 9, 1 , la
 funzione isDescending ritorna false. Trattare in modo opportuno anche i casi in cui l sia una lista vuota. Si scriva
 inoltre il tipo struttura che modella una lista semplicemente concatenata*/

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

 bool isDescending(node* lst){
    if (lst == nullptr)
        cout << "Lista vuota! " << endl;
    else if (lst->next == nullptr)
        return true;
    else {
        int check = lst->data;
        while (lst->next != nullptr){
            if (lst->next->data <= check){
                check = lst->next->data;
                lst = lst->next;
            } else if (lst->next->data > check)
                return false;
        }
        return true;
    }

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

    int x;
    while (true) {
        cout << "Inserire numero (termina con 0): ";
        cin >> x;
        if (x == 0) 
            break;
        AddAtTheEnd(lst, x);
    }

    // Output lista
    cout << "Lista inserita: ";
    print(lst);

    bool result = isDescending(lst);
    if (result == true)
        cout << "Lista decrescente. " << endl;
    else 
        cout << "Lista non decrescente. " << endl;


    return 0;
 }