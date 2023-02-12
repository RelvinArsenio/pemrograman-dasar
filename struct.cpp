#include <iostream>
using namespace std;

struct anggota
{
    int no_anggota;
    char nama[30];
};

int main()
{
    anggota agt;

    cout << "No Anggota: ";
    cin >> agt.no_anggota;

    cout << "Nomor Anggota Adalah: " << agt.no_anggota;
    return 0;
}

