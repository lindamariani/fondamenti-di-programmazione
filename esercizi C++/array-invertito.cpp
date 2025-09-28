#include <iostream>
using namespace std;

int main(){
    int _dim;

    do{
        cout << "inserire dimensione dell'array: ";
        cin >> _dim;
    } while (_dim < 0);

    int array[_dim];

    for (int i=0; i<_dim; i++){
        cout << "inserire il " << i+1 << " elemento: ";
        cin >> array[i];
    }

    for (int i=0; i<_dim; i++){
            cout << array[i]<< " ";
    }
    cout<< endl;

    for (int i=0; i<_dim/2; i++){
        int tmp = array[i];
        array[i] = array[_dim-1-i];
        array[_dim-1-i] = tmp;
    }

    for (int i=0; i<_dim; i++){
            cout << array[i]<< " ";
    }
    cout<< endl;

    return 0;

}