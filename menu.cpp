#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

void persegi() {
    double s;
    system("cls");
    cout << "Panjang Persegi: ";
    cin >> s;
    cout << "\nLuas Persegi: " << s * s;
    cout << "\nkeliling Persegi: " << 4 * s;
    system("pause");
}

void lingkaran() {
    double r;
    system("cls");
    cout << "Nilai Jari Jari: ";
    cin >> r;
    cout << "Luas Lingkaran: " << (M_PI * r * r) << endl;
    cout << "keliling Lingkaran: " << 2 * (M_PI * r) << endl;
    system("pause");
}

void bola() {
    double r;
    system("cls");
    cout << "Nilai Jari Jari: ";
    cin >> r;
    cout << "Luas Bola: " << 4 * (M_PI * r * r) << endl;
    cout << "keliling Bola: " << 4 / 3 * (M_PI * r) << endl;
    system("pause");
}

void tutup() {
    cout << "Selesai !!" << endl;
}

int main()
{
    int pilihan;
    do
    {
        system("cls");
        cout << "\n\n";
        cout << "||================================================||\n";
        cout << "||  Program Menghitung Luas Bangun Datar & Ruang  ||\n";
        cout << "||                                                ||\n";
        cout << "||                  By : Rizky                    ||\n";
        cout << "====================================================\n";
        cout << "|| 1. Luas dan Keliling persegi                   ||\n";
        cout << "|| 2. Luas dan Keliling lingkaran                 ||\n";
        cout << "|| 3. Luas dan volume bola                        ||\n";
        cout << "|| 4. Exit                                        ||\n";
        cout << "||================================================||\n";
        cout << "Pilih Menu: ";
        cin >> pilihan;
        switch (pilihan) {
        case 1:
        {
            persegi();
            break;
        }
        
    case 2: 
        {
            lingkaran();
            break;
        }
    
    case 3: 
        {
            bola();
            break;
        }

    case 4: 
        {
            tutup();
            break;
        }

    default: 
        {
            cout << "Salah Input!!" << endl;
            break;
        }
    }
    } while (pilihan != 4);

    return 0;
}
