#include <iostream>
using namespace std;

#define MAX_LENGHT 101

int main(){

    char str[MAX_LENGHT];
    cout << "inserire una stringa: ";
    cin.getline(str, MAX_LENGHT, '\n');

    cout << str;

    char codifica[MAX_LENGHT*2];
    int j=0;
    for (int i=0; i<str[i]!='\0'; i++){
        codifica[i]=str[i];
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            j++;
            codifica[j]='f';
        } else if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            j++;
            codifica[j]='F';
        }
        j++;
    } 
    

    codifica[j]='\0';

    cout << str << endl;
    cout << codifica << endl;

    return 0;
}
