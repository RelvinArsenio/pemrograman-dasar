#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int alas, tinggi;
    double luas;

    cout << "Menghitung Luas Segitiga" << endl;
    cout << "Masukkan alas: ";
    cin >> alas;

    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    luas =  0.5 * alas * tinggi;
    cout << "Luas Segitiga Adalah: " << luas << endl;
    return 0;
    
}