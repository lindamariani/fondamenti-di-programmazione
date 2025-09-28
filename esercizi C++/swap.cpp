#include <iostream>
using namespace std;


void swap(int& x, int& y){ //passaggio x riferimento
    int tmp=x;
    x=y;
    y=tmp;
}

void swap(int* x_p, int* y_p){ //passaggio x valore, copio i valori
    int tmp= *x_p;
    *x_p = *y_p;
    *y_p = tmp;
}

void swap(int a[], int length, int i, int j){ 
    if (i>=0 && i<length && j>=0 && j<length){
        int tmp= a[i];
        a[i]= a[j];
        a[j]=tmp;
    }
}

int main(){
    int a=5;
    int b=7;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << a << " " << b << endl;
    swap(&a, &b); //int pointer
    cout << a << " " << b << endl;

    int ar[5]= {1, 2, 3, 4, 5};
    swap(ar, 5, 0, 1); //si fa senza a mettere ar[5], le parentesi vengono ignorate, basta ar

    for(int i=0; i< 5; i++)
        cout << ar[i] << " ";
    cout << endl;

    int v=13;
    swap(&v, 10, 0, 1);
    cout << v << endl;

    return 0;
}