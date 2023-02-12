#include <iostream>
using namespace std;

struct anggota
{
    int no_anggota;
    char nama[30];
};

int main()
{
    anggota agt[10];

    cout << "No Anggota ke 2: ";
    cin >> agt[1].no_anggota;

    cout << "Nomor Anggota Adalah: " << agt[1].no_anggota;
    return 0;
}

