#include <iostream>
#include <string>
using namespace std;

struct data1
{
    string nip[12], nama[12];
    int i, menu;
};
data1 biodata;

void input() {
    cout << "Masukkan banyak data: ";
    cin >> biodata.i;
    for (int a = 1; a <= biodata.i; a++)
    {
        cout << "\nData ke: " << a;
        
        cout << "\nMasukkan NIP: ";
        cin >> biodata.nip[a];

        cout << "Masukkan Nama: ";
        cin >> biodata.nama[a];
    }
    
}

void tampil() {
    cout << "\n Data yang sudah masuk: " << endl;
    for (int a = 1; a <= biodata.i; a++)
    {
        cout << "\nData ke: " << a;
        
        cout << "\nNIP: " << biodata.nip[a];

        cout << "\nNama: " << biodata.nama[a] << endl;
    }
    system("pause");
}

int main()
{
    do
    {
        system("cls");
        cout << "\n\n";
        cout << "||================================================||\n";
        cout << "||            Program Struct Dengan C++           ||\n";
        cout << "||                                                ||\n";
        cout << "||                 By : Rizky                     ||\n";
        cout << "====================================================\n";
        cout << "|| 1. Input Data                                  ||\n";
        cout << "|| 2. Tampil Data                                 ||\n";
        cout << "|| 3. Keluar                                      ||\n";
        cout << "||================================================||\n";

        cout << "Pilih Menu: [1/2/3]: ";
        cin >> biodata.menu;
        switch (biodata.menu)
        {
        case 1:
            input();
            break;
        case 2:
            tampil();
            break;
        }

    } while (biodata.menu !=3);
    
    return 0;
}

