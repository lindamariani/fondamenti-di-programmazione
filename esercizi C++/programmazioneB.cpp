#include <iostream>
using namespace std;

class persona {
    public:
        string nome;
        string cognome = "Mariani";
        int eta;
};

int divide(int a, int b){
    if (b == 0)
        throw runtime_error("fanculooo");
    return a/b;
}

int main() {
    try {
        int result = divide(10, 0);
        cout << result << endl;
    }
    catch(const exception &e){
        cerr << e.what() << '\n';
    }

    cout << "ciao" << endl;

    persona persona1;
    persona persona2;
    persona2.cognome = "Rossi";
    //cout << persona1.cognome << endl;
    //cout << persona2.cognome << endl;

    return 0;
}