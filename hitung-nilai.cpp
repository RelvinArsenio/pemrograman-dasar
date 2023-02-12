#include <iostream>
#include <string>
using namespace std;

int main()
{
    string npm, nama, kelas;
    short nilai;
    char hm;
    
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    
    cout << "Masukkan NPM: ";
    cin >> npm;

    cout << "Masukkan Kelas: ";
    cin >> kelas;

    cout << "Masukkan nilai: ";
    cin >> nilai;
    
    if (nilai >= 80 && nilai <=100)
    {
        hm = 'A';
    }
    else if (nilai >= 70 && nilai <80)
    {
        hm = 'B';
    }
    else if (nilai >= 55 && nilai <70)
    {
        hm = 'C';
    }
    else if (nilai >= 40 && nilai <55)
    {
        hm = 'D';
    }
    else if (nilai < 40)
    {
        hm = 'E';
    }
    else
    {
        cout << "Nilai Out Of Range";
        hm='-';
    }

    cout << endl;
    cout << "NPM        : " << npm << endl;
    cout << "Nama       : " << nama << endl;
    cout << "Kelas      : " << kelas << endl;
    cout << "Nilai      : " << nilai << endl;
    cout << "Huruf Mutu : " << hm << endl;

    system("pause");
    

    return 0;
}
