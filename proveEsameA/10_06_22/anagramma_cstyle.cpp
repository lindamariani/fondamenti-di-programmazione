/* Scrivere una funzione main che legge da tastiera due stringhe s1 e s2 di lunghezza massima 100
 caratteri. La funzione deve:
 stampare a video la stringhe s1 e s2;
 stampare a video un messaggio che indica se s1 e lanagramma di s2 (per esempio, la stringa "casata" e anagramma
 di "aaacst").
 Utilizzare solamente stringhe C-style*/

 #include <iostream>
 #include <cstring>
 using namespace std;
 #define MAX_LEN 100

 bool isAnagram(char* str1, char* str2){
    int dim1 = strlen(str1);
    int dim2 = strlen(str2);

    if (dim1 != dim2)
        return false;

    // Bubble sort parola 1
    for(int j = 0; j < dim1 - 1; j++){
        for(int i = 0; i < dim1 - 1; i++){
            if(str1[i] > str1[i + 1]){
                char temp = str1[i];
                str1[i] = str1[i + 1];
                str1[i + 1] = temp;
            }
        }
    }

    // Bubble sort parola 2
    for(int j = 0; j < dim2 - 1; j++){
        for(int i = 0; i < dim2 - 1; i++){
            if(str2[i] > str2[i + 1]){
                char temp = str2[i];
                str2[i] = str2[i + 1];
                str2[i + 1] = temp;
            }
        }
    }

    // Check
    for (int i = 0; i < dim1; i++){
        if (str1[i] != str2[i])
            return false;
    }

    return true;

 }

 int main(){
    
    char str1[MAX_LEN];
    cout << "Inserire prima parola: ";
    cin.getline(str1, MAX_LEN + 1);

    char str2[MAX_LEN];
    cout << "Inserire prima parola: ";
    cin.getline(str2, MAX_LEN + 1);

    int dim1 = strlen(str1);
    int dim2 = strlen(str2);

    // Salvo le due parole per l'output
    char original1[dim1];
    strcpy(original1, str1);
    char original2[dim2];
    strcpy(original2, str2);

    bool check = isAnagram(str1, str2);
    if (check == false){
        cout << "Le due parola non sono anagrammi. " << endl;
    } else {
        cout << "La parola " << original1 << " e' anagramma della parola " << original2 << endl;
    }
    

    return 0;
 }