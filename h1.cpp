
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Laskee ja tulostaa summan
void calcSum(int a, int b) {
    cout << "Summa: " << a + b << endl;
}

// Laskee ja tulostaa osamaaran
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    }
    else {
        cout << "Osamaara: " << fixed << setprecision(2)
        << (float)a / b << endl;
    }
}

// Palauttaa summan
int retSum(int a, int b) {
    return a + b;
}

// Palauttaa osamaaran
float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }

    return (float)a / b;
}

int main() {

    int a, b;
    float result;

    cout << "Anna ensimmainen luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;

    // Kutsutaan calc-funktioita
    calcSum(a, b);
    calcDiv(a, b);

    // Kutsutaan ret-funktioita
    cout << "retSum: " << retSum(a, b) << endl;

    try {
        result = retDiv(a, b);
        cout << "retDiv: " << fixed << setprecision(2)
             << result << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
