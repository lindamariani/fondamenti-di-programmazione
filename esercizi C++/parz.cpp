#include <iostream>
using namespace std;

int main(){
    float x=5;
    float& y=x;

    cout << x << " " << y << " " << &x << " " << &y << endl;
}