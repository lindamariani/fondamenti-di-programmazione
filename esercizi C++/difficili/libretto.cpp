#include <iostream>
#include <cstring>
using namespace std;


struct data {
    int gg;
    int mm;
    int anno;
};

struct esame {
    char nome_esame[50];
    int voto;
    data data_verbalizzazione;
};


int main() {
    esame libretto[50];
    int op;
    int cursor = 0;

    do {
        int failed;
        esame e;

        if (cursor >= 50) {
            cout << "Libretto pieno!" << endl;
            break;
        }

        // Lettura nome esame
        cout << "Inserisci il nome dell'esame da verbalizzare: ";
        cin.getline(e.nome_esame, 50);

        // Lettura voto esame
        int voto;
        do {
            cout << "Inserire il voto: ";
            cin >> voto;
            cin.ignore();
            failed = cin.fail();
            if (failed) {
                cin.clear();
                cin.ignore(5000, '\n');
            } else if (voto >= 18 && voto <= 30)
                e.voto = voto;

        } while (failed || voto < 18 || voto > 30);

        // gg/mm/aaaa
        // Lettura data esame
        char data[11];
        do {
            cout << "Inserire la data di verbalizzazione: ";
            cin.getline(data, 11);
            failed = cin.fail();

            if (failed) {
                cin.clear();
                cin.ignore(5000, '\n');
            } else if (data[2] == '/' && data[5] == '/' && strlen(data) == 10) {
                char gg[3] = {data[0], data[1], '\0'};
                char mm[3] = {data[3], data[4], '\0'};
                char aaaa[5] = {data[6], data[7], data[8], data[9], '\0' };
                e.data_verbalizzazione.gg = atoi(gg);
                e.data_verbalizzazione.mm = atoi(mm);
                e.data_verbalizzazione.anno = atoi(aaaa);
            }
        } while (failed || data[2] != '/' || data[5] != '/' || strlen(data) != 10);

        libretto[cursor] = e;
        cursor++;


        
        cout << "Vuoi terminare? (-1 per terminare): ";
        cin >> op; // TODO: completare
        cin.ignore();
    } while (op != -1);


    // Stampare il libretto
    for (int i = 0; i < cursor; i++) {
        cout << "Nome esame: " << libretto[i].nome_esame << endl;
        cout << "Voto esame: " << libretto[i].voto << endl;
        cout << "Data verbalizzazione: " << libretto[i].data_verbalizzazione.gg << "/" << libretto[i].data_verbalizzazione.mm << "/" << libretto[i].data_verbalizzazione.anno << endl << endl;
    }

    return 0;
}
