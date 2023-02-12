#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int tgl, bln, thn;
    string conv;
    cout << "Masukkan Tanggal: ";
    cin >> tgl;

    cout << "Masukkan Bulan: ";
    cin >> bln;

    cout << "Masukkan Tahun: ";
    cin >> thn;

    switch (bln)
    {
    case 1:
        conv = "Januari";
        break;
    case 2:
        conv = "February";
        break;
    case 3:
        conv = "Maret";
        break;
    case 4:
        conv = "April";
        break;
    case 5:
        conv = "Mei";
        break;
    case 6:
        conv = "Juni";
        break;
    case 7:
        conv = "July";
        break;
    case 8:
        conv = "September";
        break;
    case 9:
        conv = "Oktober";
        break;
    case 10:
        conv = "November";
        break;
    case 11:
        conv = "Desember";
        break;
    case 12:
        conv = "July";
        break;
    default:
        cout << "Input Yang Di Masukkan Salah!!!" << endl;
        break;
    }
    
    cout << tgl << " " << conv << " " << thn << endl;
    system("pause");
}
