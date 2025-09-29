#include <iostream>
using namespace std;


PER TASK 6 NO DA FUNZIONI IN POI

int main(){
    int x=5;
    int* p1= &x; //mettere * per il pointer

    float f= 9.2; //valore
    float* p2= &f; //indirizzo, p2 punta a f

    int y= 7;
    p1 = &y;

    int z=5;
    int* p= &z;
    /*  int**p1 =&p;
        int p*** p2= &p1;   */
    int q= *p;
    *p= 7;


    int i;
    int* p3= &i;
    //for (i=0; i<10; i++)
        //cout << p3* << endl;

    /*int j=5;
    int* p4= &j;
    int* p5= &j;
     cout << *p4 << " " << *p5 << endl;
    *p4=*p4 + 1;
    cout << *p4 << " " << *p5 << endl; */

    int h=5 , k=5;
    int* p4= &h;
    int* p5= &h;
    cout << *p4 << " " << *p5 << endl;
    p5 = &k;
    *p4=*p4 + 1;
    cout << *p4 << " " << *p5 << endl;

    /*cout << x << endl;
    cout << p1 << endl;
    cout << p2 << endl; 
    cout << p << endl; 
    cout << q << endl; */
    
return 0;
}
