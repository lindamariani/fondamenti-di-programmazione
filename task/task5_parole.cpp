#include <iostream>
#include <cstring>
using namespace std;

#define MAX_LENGTH 100

int main(){

    char p_uno[MAX_LENGTH];
    char p_due[MAX_LENGTH];
    bool bubble=false;

    do{

        cout << "inserire la prima parola: ";
        cin.getline(p_uno, MAX_LENGTH); 
        
        if (p_uno[0]=='$'){
            cout << "addio! " << endl; break;
        } else {
            
            cout << "inserire la seconda parola: ";
            cin.getline(p_due, MAX_LENGTH); 

            int a= strlen(p_uno);
            int b= strlen(p_due);

            do{
                bubble=false;
                    for(int i = 0; i < a-1; i++) { //bubble sort p_uno
                        if (p_uno[i] > p_uno[i + 1]) {
                            char tmp = p_uno[i];
                            p_uno[i] = p_uno[i + 1];
                            p_uno[i + 1] = tmp;
                            bubble = true;
                        } 
                    }    
                    for(int j = 0; j < b-1; j++){ // bubble sort p_due
                        if (p_due[j] > p_due[j + 1]) {
                            char tmp = p_due[j];
                            p_due[j] = p_due[j + 1];
                            p_due[j + 1] = tmp;
                            bubble = true;
                        }
                    }
            } while (bubble); //continua finche finiti i for non ci sono più bubble eseguiti-->bool bubble resta false
            
            int counter=0;
            if (strcmp(p_uno, p_due)==0){ //se le due parole sono uguali:
                cout << "le due parole sono anagrammi. " << endl;
            } else {
                for(int i=0; i<a-1; i++){ //ciclo x controllare le lettere, se sono diverse sommo al counter 1
                        if (p_uno[i]!=p_due[i])
                            counter++;
                        else
                            break; //se ne trovo anche una sola uguale esco dal ciclo
                    
                }
            }    
        
            if (counter==a-1 || counter==b-1) //se tutte le lettere sono diverse:
                cout << "le due parole non hanno lettere in comune. " << endl;  
        

        }

        cout << endl;

    } while (p_uno[0] != '$');

    return 0;
}

