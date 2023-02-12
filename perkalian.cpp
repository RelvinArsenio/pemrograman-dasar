#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int a, b, c, hasil;
    cout << "Masukkan Angka Pertama: ";
    cin >> a;
    cout << "Masukkan Angka Kedua: ";
    cin >> b;
    cout << "Masukkan Angka Ketiga: ";
    cin >> c;

    hasil = a * b * c;
    
    cout << "Hasil Dari Perkalian: " << hasil << endl;
    return 0;
}
