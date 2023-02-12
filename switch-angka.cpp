#include <iostream>
using namespace std;

int main()
{
    int bil;
    system("cls");
    cout << "Masukkan Angka: ";
    cin >> bil;

    switch (bil)
    {
    case 1:
        cout << "Anda Memasukkan Angka 1" << endl;
        break;
    case 2:
        cout << "Anda Memasukkan Angka 2" << endl;
        break;
    case 3:
        cout << "Anda Memasukkan Angka 3" << endl;
        break;
    case 4:
        cout << "Anda Memasukkan Angka 4" << endl;
        break;
    default:
        cout << "Angka Yang Anda Masukkan Bukan Angka 1 2 3 4" << endl;
        break;
    }
    system("pause");
}
