#include <iostream>
using namespace std;

class stringSet  {
    private:
        int l; //tiene traccia di quanto abbiamo riempito array
        string s[100]; //array max 100 elementi
    public:

        stringSet(){
            this->l = 0;
        }

        stringSet(string s[], int l){
            this->l = 0;
            for(int i = 0; i < l; i++)
                this->add(s[i]);
        }

        void add(string x){
            if(!contains(x)){
                if(l == 100){
                    cout << "Spazio insufficiente! " << endl;
                } else {
                    this->s[l] = x;
                    l++;
                }
            }
        }

        bool contains(const string& elem) const{
            for(int i = 0; i < l; i++)
                if(this->s[i] == elem)
                    return true;
            return false;
        }

        int size() const{
            return this->l;
        }

        bool operator<(const stringSet& other) const{ //ritorna true se this è sottoinsieme di other
            if(size() > other.size())
                return false;

            for(int i = 0; i < this->l; i++)
                if(!other.contains(s[i]))
                    return false;

            return true;
        }

        stringSet operator+(const stringSet other){
            stringSet result;
            if(this->l + other.l > 100){
                cout << "Spazio insufficiente! " << endl;
                return result;
            }

            for(int i = 0; i < this->l; i++)
                result.add(this->s[i]);

            for(int i = 0; i < other.l; i++)
                result.add(other.s[i]);

            return result;
        }

        void print(ostream& dest) const{
            dest << "{";
            for(int i = 0; i < this->l; i++){
                dest << this->s[i];
                if(i != this->l - 1)
                    dest << ", ";
            }
            dest << "} ";
        }
};

    ostream& operator<<(ostream& dest, const stringSet& other){
            other.print(dest);
            return dest;
    }

int main() {
    stringSet s1;
    cout << "S1: " << s1 << endl;
    cout << "Cardinalita' di S1: " << s1.size() << endl;

    string frase[] = {"il", "gatto", "e", "il", "topo"};
    stringSet s2(frase, 5);
    cout << "S2: " << s2 << endl;
    cout << "Cardinalita' di S2: " << s2.size() << endl;

    stringSet empty;
    cout << "Unione tra empty e S2: " << empty + s2 << endl;
    
    s1.add("topo");
    s1.add("gatto");
    s1.add("e");
    s1.add("il");

    cout << "S1: " << s1 << endl;
    cout << "Cardinalita' di S1: " << s1.size() << endl;

    if(s1 < s2 && s2 < s1)
        cout << "Ok. " << endl;
    else    
        cout << "Failed. " << endl;

    stringSet s3;
    s3.add("e");
    s3.add("il");
    s3.add("cane");

    cout << "Unione tra S1 e S3: " << s1 + s3 << endl;
    cout << "Cardinalita' dell'unione: " << (s1 + s3).size() << endl;

   /* string aux = "";
    for(int i = 0; i < 101; i++){
        aux = aux + "*";
        s3.au
    }   */
    
    return 0;
}
