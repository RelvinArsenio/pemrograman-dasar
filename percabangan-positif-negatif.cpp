#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int angka;
    cout << "Masukkan Angka: ";
    cin >> angka;

    if (angka >= 0)
    {
        cout << "Angka " << angka << " Adalah Angka Positif\n";
    }
    else
    {
        cout << "Angka " << angka << " Adalah Angka Negatif\n";
    }
    system("pause");
    
    return 0;
}
