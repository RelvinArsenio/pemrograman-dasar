#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int a, b, c;
    cout << "Menukar Angka Pertama Dengan Kedua" << endl;
    cout << "Masukkan Angka Pertama: ";
    cin >> a;
    cout << "Masukkan Angka Kedua: ";
    cin >> b;

    cout << "Nilai Sebelum Di Tukar\n";
    cout << "Angka Pertama: " << a << endl;
    cout << "Angka Kedua: " << b << endl;

    c = b;
    b = a;
    a = c;

    cout << "Nilai Setelah Di Tukar\n";
    cout << "Angka Pertama: " << a << endl;
    cout << "Angka Kedua: " << b << endl;
    return 0;
}
