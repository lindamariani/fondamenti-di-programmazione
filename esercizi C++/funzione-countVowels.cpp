#include <iostream>
using namespace std;

bool isvowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int countvowel(char* str){
    if (*str == '\0')
        return 0;
    else if (isvowel(*str))
        return 1+countvowel(str+1);
    else
        return countvowel(str+1);
}

int main(){
    cout << countvowel("helloworld") << endl;
}