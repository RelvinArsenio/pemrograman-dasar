#include <iostream>

using namespace std;

int main()
{
    system("cls");
    double bil1, bil2;
    double hasil;
    char opt;

    cout << "Masukkan Angka Pertama: ";
    cin >> bil1;

    cout << "Masukkan Angka Operator [+ - / *]: ";
    cin >> opt;

    cout << "Masukkan Angka Kedua: ";
    cin >> bil2;

    switch (opt)
    {
        case '+':
            hasil = bil1 + bil2;
            break;
        case '-':
            hasil = bil1 - bil2;
            break;
        case '/':
            hasil = bil1 / bil2;
            break;
        case '*':
            hasil = bil1 * bil2;
            break;
        default:
            cout << "Operator Yang Dimasukkan Salah!!!" << endl;
            return EXIT_FAILURE;
    }

    cout << "Hasil Dari " << bil1 << " " << opt << " " << bil2 << " = " << hasil << endl;
    return EXIT_SUCCESS;
}
