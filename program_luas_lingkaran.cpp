#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    long r;
    double luas, keliling, phi = 3.14;

    cout << "Masukkan Jari Jari: ";
    cin >> r;

    luas = phi * r * r;
    keliling = 2 * phi * r;

    cout << "Luas: " << luas;
    cout << endl;
    cout << "Keliling: " << keliling;


    return 0;
}