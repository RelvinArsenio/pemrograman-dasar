#include <iostream>
using namespace std;

int main() {
    system("cls");
    int angka;
    cout << "Masukkan Angka: ";
    cin >> angka;

    if (angka %2 == 0)
    {
        cout << "Angka " << angka << " Adalah Angka Genap\n";
    }
    else
    {
        cout << "Angka " << angka << " Adalah Angka Ganjil\n";
    }
    system("pause");
    
    return 0;
}
