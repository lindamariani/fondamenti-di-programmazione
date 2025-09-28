#include <fstream>
#include <iostream>
using namespace std;

int main(){

ifstream f1;
f1.open("filehelloworld.txt");
if(f1.fail()){
    cout << "impossibile aprire il file" << endl;
    return -1;
}


/*char c= f1.get(); //per stampare caratteri del file      QUESTO PER STAMPARE NEL COMPILATORE CIO CHE CE NEL FILE F1
while(!f1.eof()){ //finche non è end of file
    cout << c;
    c= f1.get();
}*/


ofstream f2;
f2.open("filehelloworld_copia.txt");
char c=f1.get();
while(!f1.fail()){
    f2.put(c);
    c= f1.get();
}

f1.close();
f2.close();
return 0;

}


