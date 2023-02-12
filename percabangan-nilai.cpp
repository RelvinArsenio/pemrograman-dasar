#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    system("cls");
    int nilai_ujian;
    cout << "Masukkan Nilai Ujian: ";
    cin >> nilai_ujian;
    
    if (nilai_ujian >= 75)
    {
        cout << "Nilai Anda " << nilai_ujian << " Selamat Anda Lulus\n";
    }
    else {
        cout << "Anda Tidak Lulus!!!\n";
    }
    system("pause");
    
    return 0;
}
