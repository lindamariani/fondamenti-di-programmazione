#include <iostream>
using namespace std;

int main () {
int m,n ;

cout << "inserire dimensione m";
cin >> m ;
cout << "inserire dimensione n";
cin >> n ;

int b [m][n];

for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
        cout << "inserire l'elemento in posizione(" << i << " " << j << ")" << endl;
        cin >> b [i][j];
    }
}

/*for (int i=0; i<m; i++)
    b[i][1]++;*/

for (int i=0; i<m; i++)
    for (int j=0; j<n; j++)
        cout << b[i][j] << " ";
cout<< endl;

return 0;

}
