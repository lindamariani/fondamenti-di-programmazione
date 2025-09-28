#include <iostream>
using namespace std;

int reverse_it(int n){
    int r=0;

    while(n!=0){
        int c= n%10;
        r= r*10+c;
        n/=10;
    }
    return r;
}

int reverse_rec(int n, int r){
    if (n==0)
        return r;
    else 
        reverse_rec(n/10 , r * 10 + n % 10);
}


int main(){
    cout << reverse_it(12345) << endl;
    cout << reverse_it(67890) << endl;

    return 0;
}