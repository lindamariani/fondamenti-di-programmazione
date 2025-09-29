#include <iostream>
#include <cmath>
using namespace std;

bool eq2(float a, float b, float c, float& r1, float& r2){
    float delta = pow(b, 2)- 4 * a * c;
    if (delta < 0)
        return false;
    else{
        r1= (-b + sqrt(delta))/ 2*a;
        r2= (-b + sqrt(delta))/ 2*a;
        return true;
    }
}

bool contains(int a[], int length, int x){
    for (int i=0; i<length; i++){
        if (a[i]==x)
            return true;
        return false;
    }
}

bool contains(char str[], char x){
    for (int i=0; i<str[i]!= '\0'; i++){
        if (str[i]==x)
            return true;
        return false;
    }
}

bool contains2(char* str, char x){
    for (; *str!= '\0'; str++){
        if (*str==x)
            return true;
        return false;
    }
}

int main(){
    char str[]= "helloworld";
    cout << contains(str, 'r') << endl;
    cout << contains2(str, 'r') << endl;

    return 0;
}

/*int main(){
    int r1;
    int r2;
    if (eq2(1, 2, 3, r1, r2)){
        cout << "x_1: " << r1 << " " << "x_2: " << r2 << endl;
    } else {
        cout << "discriminante negativo" << endl;
    }

    return 0;

}*/
