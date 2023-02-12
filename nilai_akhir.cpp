#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int absensi, praktek, uts, uas;
    double nilai_akhir;

    cout << "Masukan Nilai absensi: ";
    cin >> absensi;
    
    cout << "Masukkan praktek: ";
    cin >> praktek;
    
    cout << "Masukkan uts: ";
    cin >> uts;

    cout << "Masukkan uas: ";
    cin >> uas;
    
    nilai_akhir = (absensi * 0.1) + (praktek * 0.2) + (uts * 0.3) + (uas * 0.4);
    cout << "Nilai Akhirmu: " << nilai_akhir << endl;
    
    return 0;
}