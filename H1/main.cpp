#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b) {
    cout << "Summa: " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Jakaja ei saa olla nolla!" << endl;
    } else {
        cout << "Osamaara: " << (float)a / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

int main() {
    int a, b;
    float result;

    cout << "Anna luku: ";
    cin >> a;
    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int sumResult = retSum(a, b);
    cout << a << " + " << b << " = " << sumResult << endl;

    try {
        result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
