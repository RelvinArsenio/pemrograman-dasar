#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int pilih, bayar;
    string status;

    cout << "=== Menu Pilihan ===\n";
    cout << "1. Dosen\n";
    cout << "2. Mahasiswa\n";
    cout << "3. Umum\n";
    cout << "=====================\n";
    cout << "Masukkan Pilihan [1/2/3]: ";
    cin >> pilih;

    if (pilih == 1)
    {
        status = "Dosen";
        bayar = 50000;
        cout << endl;
    }
    else if (pilih == 2)
    {
        status = "Mahasiswa";
        bayar = 75000;
        cout << endl;
    }
    else if (pilih == 3)
    {
        status = "Umum";
        bayar = 100000;
        cout << endl;
    }
    else
    {
        status = "-";
        bayar = 0;
        cout << endl;
        cout << "Input Yang Anda Masukkan Salah!!!\n";
    }
    cout << "Status Anda : " << status << endl;
    cout << "Pembayaran  : Rp." << bayar << endl;
    system("pause");
    
    return 0;
}
