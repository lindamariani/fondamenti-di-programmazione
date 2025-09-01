#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int _dim;

    cout << "Inserire numero di bit: ";
    cin >> _dim;
    
    if(_dim < 2){
        do{
            cout << "ERRORE! Inserire numero di bit: ";
            cin >> _dim;
        } while (_dim < 2);
    }

    int array[_dim];

    for (int i=_dim-1; i>=0; i--){
        cout << "inserire il bit nella poszione " << i << " : ";
        cin >> array[i];
        if(array[i]<0 || array[i]>1){
            do{
                cout << "Errore! Inserire il bit nella poszione " << i << " : ";
                cin >> array[i];
            }while(array[i]<0 || array[i]>1);
        } else {}
    }

    int op;
    do{
    cout << "Scegliere operazione: " << endl;
    cout << "0 - Stampa binario " << endl;
    cout << "1 - converti in decimale " << endl;
    cout << "2 - Somma " << endl;
    cout << "Operazione: ";
    cin >> op;
    } while (op < 0 || op > 2);

    for (int i=0; i<_dim/2; i++){
            int tmp = array[i];
            array[i] = array[_dim-1-i];
            array[_dim-1-i] = tmp;
        }
    
    int originale[_dim];
        for(int i=0; i<_dim; i++)
            originale[i]=array[i];

    if (op==0){ //OPERAZIONE 0
        
        for (int i=0; i<_dim; i++){
            cout << array[i]<< " ";
        }


    } else if ( op==1){ //OPERAZIONE 1
        int pot=0;
        int somma=0;

        if (array[0]==1){
            cout << "-";
            for (int i=_dim-1; i>=0; i--){
                if( array[i]==0 )
                    array[i]=1;
                else 
                    array[i]=0;
            }
        } else { }

        for(int i=_dim-1; i>0; i--){
                if ( array[i]==1 )
                    somma += pow(2,pot);
                else
                    somma+=0;
                
                pot++;
        }
            
        if (originale[0]==1){
            for (int i=_dim-1; i>=0; i--){
                if( array[i]==0 )
                    array[i]=1;
                else 
                    array[i]=0;
            }
        }

        if(array[0]==1)
            cout << somma+1 << endl;
        else 
            cout << somma;


    } else if (array[_dim-1]==0) { //OPERAZIONE 2 SENZA RIPORTO TIPO 000-->001
        for(int i=_dim-1; i>=0; i--){
                array[i]+=1;
                    for (int i=0; i<_dim; i++){
                        cout << array[i]<< " ";
                    } break;
        }


    } else { //OPERAZIONE 2 CON RIPORTO
        for(int i=_dim-1; i>=0; i--){   
            if(array[i]+1>=2) {
                array[i]=0;
                array[i-1]=1;
                if (originale[i-1]==0){
                    for (int i=0; i<_dim; i++){
                    }
                    break;
                }
            }
        }

        if (array[0]==1 && originale[0]==0)
            cout << "OVERFLOW!";
        else if (array[0]==1 && originale[0]==1){
            for (int i=0; i<_dim; i++){
                cout << array[i]<< " ";
            }
        }
        else {
            for (int i=0; i<_dim; i++){
                cout << array[i]<< " ";
            }
        }
    }     
        

    
return 0;
 
}
