#include <iostream>
using namespace std;

void luas(int &ls, int p, int l) {
    ls = p * l;
    
}

int main()
{
    // system("cls");
    int pj, lb, hsl;
    cout << "Panjang = ";
    cin >> pj;

    cout << "Lebar = ";
    cin >> lb;

    luas(hsl,pj,lb);
    cout << "Luasnya = " << hsl;
    return 0;
}
