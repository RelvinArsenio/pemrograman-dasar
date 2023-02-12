#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Selamat datang di kalkulator sederhana!" << endl;
    cout << "Masukkan operasi yang ingin dilakukan (misal: 2 + 2): ";
    cin >> a >> op >> b;

    double hasil;
    switch (op) {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;
    default:
        cout << "Operator tidak dikenal!" << endl;
        return EXIT_FAILURE;
    }

    cout << "Hasilnya adalah: " << hasil << endl;
    return 0;
}
