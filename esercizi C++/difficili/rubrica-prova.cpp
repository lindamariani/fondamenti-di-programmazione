#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

struct contatto {
    char nome[MAX];
    char cognome[MAX];
    int numero ;
};


int main(){


contatto rubrica[MAX];
int op;
int numero_c = 0;

cout << "** Rubrica ** " << endl;

do {
    contatto c;
    int failed;

    if (numero_c >= MAX) {
            cout << "Rubrica piena!" << endl;
            break;
    }

    cout << "   1 - Visualizza rubrica " << endl;
    cout << "   2 - Inserisci contatto " << endl;
    cout << "   3 - Cancella contatto " << endl;
    cout << "   4 - Esci " << endl;

    cin >> op;
    cin.ignore();

    if (op == 1){ //MOSTRA RUBRICA
        if (numero_c == 0){
            cout << "Rubrica vuota! " << endl; 
        } else {
            for (int i = 0; i < numero_c; i++) { //STAMPA RUBRICA
                cout << rubrica[i].nome << " " << rubrica[i].cognome << " " << rubrica[i].numero << endl;
            }
        }


    } else if (op == 2) { //AGGIUNGERE CONTATTO 

        char nome[MAX];
        char cognome[MAX];
        int numero;
                    
        cout << "Inserisci il nome del contatto da aggiungere: "; //NOME
        cin.getline(c.nome, MAX);

        cout << "Inserisci il cognome del contatto da aggiungere: "; //COGNOME
        cin.getline(c.cognome, MAX); 
        
        do{
            cout << "Inserisci il numero del contatto da aggiungere: "; //NUMERO
            cin>>numero;
            failed = cin.fail();
                if (failed) {
                    cin.clear();
                    cin.ignore(500, '\n');
                } else
                    c.numero=numero;
        } while (failed);  
            
        rubrica[numero_c]=c;
        numero_c++;
        cout << "Contatto aggiunto! " << endl;


    } else if (op == 3) { //CANCELLARE CONTATTO

        char nome_canc[MAX];
        char cognome_canc[MAX];
        
        cout << "Inserisci il nome del contatto da cancellare: ";
        cin.getline(nome_canc, MAX);

        cout << "Inserisci il cognome del contatto da cancellare: ";
        cin.getline(cognome_canc, MAX);

        bool trovato = false;
        for(int i=0; i<numero_c; i++){ //CREO CICLO X COMPARARE I NOMI IN RUBRICA E IL NOME INSERITO DALL'UTENTE
            if (strcmp(rubrica[i].nome, nome_canc)==0 && strcmp(rubrica[i].cognome, cognome_canc)==0) { //TROVO QUELLO CHE MATCHA
                trovato= true;
                for(int j=i; j<numero_c -1; j++){
                    rubrica[j]=rubrica[j+1]; //CICLO PER TOGLIERE IL BUCO CHE SI CREA IN RUBRICA
                }
                numero_c--;
                cout << "Contatto eliminato! ";
                break;
            }
        } 

        if (trovato==false)
            cout << "Nessuna corrisponza, riprovare. " << endl;
        
    } else 
        cout << "Addio! " << endl;

    cout << endl;


} while (op != 4);

    cout << endl;

    return 0;
}
