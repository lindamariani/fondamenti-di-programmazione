/*Scrivere una funzione di tipo int chiamata compact che, presi come parametri un array di numeri
 reali a, il numero n di elementi in a ed un array di numeri reali b, copia nellarray b tutti e soli gli elementi di a che sono
 strettamente maggiori della media degli elementi di a. La funzione ritorna il numero di elementi inseriti nellarray b.*/

 #include <iostream>
 using namespace std;

 int compact(float* arrA, int dimA, float* arrB){

    // Valore della media
    float media = 0;
    for (int i = 0; i < dimA; i++){
        media += arrA[i];
    }
    media = media / dimA;

    int dimB = 0;
    for(int i = 0; i < dimA; i++){
        if (arrA[i] > media){
            arrB[dimB++] = arrA[i];
        }
    }

    return dimB;
 }

 int main(){

    int dimA;
    do {
        cout << "Inserire dimensione array A: ";
        cin >> dimA;
    } while (dimA < 1);

    float arrayA[dimA];
    for (int i = 0; i < dimA; i++){
        cout << "Inserire elemento numero " << i + 1 << ": ";
        cin >> arrayA[i];
    }

    float media = 0;
    for (int i = 0; i < dimA; i++){
        media += arrayA[i];
    }
    media = media / dimA;

    float arrayB[dimA];
    int dimB = compact(arrayA, dimA, arrayB);

    cout << "Media: " << media << endl;

    cout << "Elementi strettamente maggiori della media: ";
    for (int i = 0; i < dimB; i++)
        cout << arrayB[i] << " ";

    return 0;
 }