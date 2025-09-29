#include <iostream>
using namespace std;

int main(){

int i = 0, j = 0;
while (i < 2) {
   j = 0;
   while (j < 5) {
      if (j == 2)
            break;
      cout << i << " " << j << endl;
      j++;
   }
   i++;
}

cout << "i: " << i << endl;
cout << "j: " << j << endl;

return 0;
}

