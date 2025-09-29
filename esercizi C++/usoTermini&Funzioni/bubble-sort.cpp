#include <iostream>
#define N 10

using namespace std;
 
int main()
{
    char a[N], i, j, temp;

    cout << "Inserisci gli elementi:\n"; 
    for(i = 0; i < N; i++)
        cin >> a[i];
        
    // Ordino gli elementi        
    for(j = 0; j < N - 1; j++)
        for(i = 0; i < N - 1; i++)
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
    
    cout << "Array ordinato con bubble sort:";
    for(i = 0; i < N; i++)
        cout << " " << a[i];
        
    return 0;
}
