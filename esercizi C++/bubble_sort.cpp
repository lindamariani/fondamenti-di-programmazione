#include <iostream>
using namespace std;

int main () {

    int x[10] = {-1, 6, 3, 9, 11, 13, -9, 8, 1, 4}; //11

    for (int i = 0; i < 9; i++) //9 perche togli \0 e parti da 0
        for (int j = 0; j < 9; j++)
            if (x[j] > x[j + 1]) {
                int tmp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tmp;
        }

    for (int i = 0; i < 10; i++)
        cout << x[i] << " ";
    cout << endl;
    return 0;
}