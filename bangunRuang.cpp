#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int pilihan;

    cout << setfill('-');
    cout << setw(55) << '\n';
    cout << "\tNama : Rizky Juniardi\n";
    cout << "\tNPM : 2211010005\n";
    cout << setw(55) << '\n';

    cout << "Program Menghitung Luas Bangun Datar atau Volume Bangun Ruang" << endl;
    cout << "Bangun Datar [1] / Bangun Ruang [2] : ";
    cin >> pilihan;
    cout << endl;

    if (pilihan == 1) {
        int subPilihan;
        cout << "Menghitung Luas Bangun Datar : " << endl;
        cout << "1. Persegi Panjang" << endl;
        cout << "2. Lingkaran" << endl;
        cout << "3. Belah Ketupat" << endl;
        cout << "Pilihan : ";
        cin >> subPilihan;
        cout << endl;

        switch (subPilihan) {
            case 1: {
                int panjang, lebar;
                cout << "Menghitung Luas Persegi Panjang : " << endl;
                cout << "Masukkan nilai panjang : ";
                cin >> panjang;
                cout << "Masukkan nilai lebar : ";
                cin >> lebar;
                int luas_persegi_panjang = panjang * lebar;
                cout << "Luas Persegi Panjang : " << luas_persegi_panjang << endl;
                break;
            }
            case 2: {
                float jari_jari;
                cout << "Menghitung Luas Lingkaran : " << endl;
                cout << "Masukkan nilai jari-jari : ";
                cin >> jari_jari;
                float luas_lingkaran = M_PI * pow(jari_jari, 2);
                cout << "Luas Lingkaran : " << luas_lingkaran << endl;
                break;
            }
            case 3: {
                float diagonal1, diagonal2;
                cout << "Menghitung Luas Belah Ketupat : " << endl;
                cout << "Masukkan nilai diagonal 1 : ";
                cin >> diagonal1;
                cout << "Masukkan nilai diagonal 2 : ";
                cin >> diagonal2;
                float luas_belah_ketupat = 0.5 * diagonal1 * diagonal2;
                cout << "Luas Belah Ketupat : " << luas_belah_ketupat << endl;
                break;
            }
            default: {
                cout << "Menu tidak tersedia" << endl;
                break;
            }
        }
    } else if (pilihan == 2) {
        int subPilihan;
        
        cout << "Menghitung Volume Bangun Ruang : " << endl;
        cout << "1. Kubus" << endl;
        cout << "2. Tabung" << endl;
        cout << "3. Bola" << endl;
        cout << "Pilihan : ";
        cin >> subPilihan;
        cout << endl;

        switch (subPilihan) {
            case 1: {
                int sisi_kubus;
                cout << "Menghitung Volume Kubus : " << endl;
                cout << "Masukkan panjang sisi kubus : ";
                cin >> sisi_kubus;
                int volume_kubus = pow(sisi_kubus, 3);
                cout << "Volume Kubus : " << volume_kubus << endl;
                break;
            }
            case 2: {
                float jari_jari_tabung, tinggi_tabung;
                cout << "Menghitung Volume Tabung : " << endl;
                cout << "Masukkan jari-jari tabung : ";
                cin >> jari_jari_tabung;
                cout << "Masukkan tinggi tabung : ";
                cin >> tinggi_tabung;
                float volume_tabung = M_PI * pow(jari_jari_tabung, 2) * tinggi_tabung;
                cout << "Volume Tabung : " << volume_tabung << endl;
                break;
            }
            case 3: {
                float jari;
                cout << "Menghitung Volume Bola : " << endl;
                cout << "Masukkan jari-jari bola : ";
                cin >> jari;
                float volume = (4.0 / 3.0) * M_PI * pow(jari, 3);
                cout << "Volume Bola : " << volume << endl;
                break;
            }
            default: {
                cout << "Menu tidak tersedia" << endl;
                break;
            }
        }
    } else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
