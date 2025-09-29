#include <iostream>
using namespace std;

class Razionale {
private:
    int num;
    int den;

    Razionale somma(Razionale other) {
        Razionale result;
        result.num = this->num * other.den + this->den * other.num;
        result.den = this->den * other.den;
        return result;
    }

public:
    Razionale() {
        this->num = 0;
        this->den = 1;
    }

    Razionale(int n, int d) {
        this->num = n;
        if (this->den == 0) {
            cout << "Denominatore uguale a zero" << endl;
            this->den = 1;
        } else
            this->den = d;
    }

    Razionale operator+(Razionale other) {
        return somma(other);
    }

    Razionale operator+(int other) {
        Razionale o(other, 1);
        return *this + o;
    }

    // pre-increment (++x)
    Razionale operator++() {
        *this = *this + 1;
        return *this;
    }

    // post-increment (x++)
    Razionale operator++(int) {
        Razionale result = *this;
        *this = *this + 1;
        return result;
    }

    int& operator[](int idx) {
        if (idx == 0)
            return num;
        else if (idx == 1)
            return den;
        cout << "Errore!" << endl;
        return den;
    }

    void leggi(istream& inputStream) {
        // 5/6
        int n, d;
        char sep;
        inputStream >> n >> sep >> d;

        if (d == 0) {
            cout << "Denominatore uguale a zero!" << endl;
            num = 0;
            den = 1;
        } else {
            num = n;
            den = d;
        }
    }

   void stampa(ostream& outputStream) {
        outputStream << num << "/" << den << endl;
    }

    /*// lettura
    void operator>>(istream& sorg) {
        leggi(sorg);
        return;
    }

    // scrittura
    void operator<<(ostream& dest) {
        stampa(dest);
        return;
    }*/
};

Razionale operator+(int i, Razionale r) {
    return r + i;
}

istream& operator>>(istream& sorg, Razionale& raz) {
    raz.leggi(sorg);
    return sorg;
}

ostream& operator<<(ostream& dest, Razionale& r) {
    r.stampa(dest);
    return dest;
}


int main() {
    Razionale r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    cout << r1 << r2 << r3;
    return 0;
}
