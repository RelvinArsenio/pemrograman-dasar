#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int tv;
    cout << "===============Daftar Channel TV===============" << endl;
    cout << "1. RCTI" << endl;
    cout << "2. ANTV" << endl;
    cout << "1. TRANS TV" << endl;
    cout << "===============================================" << endl;
    cout << "Masukkan Pilihan Channel: ";
    cin >> tv;

    switch (tv)
    {
    case 1:
        cout << "Anda Memilih Channel RCTI" << endl;
        break;
    case 2:
        cout << "Anda Memilih Channel ANTV" << endl;
        break;
    case 3:
        cout << "Anda Memilih Channel TRANS TV" << endl;
        break;
    default:
        cout << "Channel Yang Anda Pilih Tidak Tersedia!!" << endl;
        break;
    }

    system("pause");
}
