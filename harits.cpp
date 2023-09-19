#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    char plug, nim[10], nama[20];

    cout << "Nama: ";
    cin.getline(nama, sizeof(nama));
    cout << "NIM: ";
    cin >> nim;
    cout << "Plug: (Kelas Pratikum Algo): ";
    cin >> plug;
    cout << "2 angka terakhir NIM dan angka favorite (2 digit): \n";
    cin >> x;
    cin >> y;
    cout << endl;

    int a = x * (y % 23);
    int b = (a - y) * 2;
    int c = b + x / 6;
    int d = c / 8 + b / 13;

    cout << setw(12) << setfill('-') << "" << "Biodata" << setw(12) << setfill('-') << "" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Plug: " << plug << endl;
    cout << setw(10) << setfill('-') << "" << "PERHITUNGAN" << setw(10) << setfill('-') << "" << endl;
    cout << "2 angka terakhir NIM (x): " << x << endl;
    cout << "Angka Favorite (y): " << y << endl;
    cout << "Dari 2 angka diatas, dilakukan perhitungan: \n";
    printf("a = x * (y %% 23) = %d * (%d %% 23) = %d\n", x, y, a);
    printf("b = (a - y) * 2 = (%d - %d) * 2 = %d\n", a, y, b);
    printf("c = b + x / 6 = %d + %d / 6 = %d\n", b, x, c);
    printf("d = c / 8 + b / 13 = %d / 8 + %d / 13 = %d\n", c, b, d);


    return 0;
}
