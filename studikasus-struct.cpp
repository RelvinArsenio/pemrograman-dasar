#include <iostream>
#include <string>

using namespace std;

// Struct untuk menyimpan informasi perjurusan
struct Jurusan {
  string nama; // Nama perjurusan
  int biaya; // Biaya kuliah perjurusan
};

// Inisialisasi array of struct untuk menyimpan informasi perjurusan
Jurusan jurusan[] = {
  {"Teknik Informatika", 6500000},
  {"Sistem Informasi", 6300000},
  {"Sistem Komputer", 6000000},
};

// Fungsi untuk menampilkan menu dan meminta input pilihan dari pengguna
int TampilkanMenu() {
  system("cls");
  cout << "Menu:" << endl;
  cout << "1. Teknik Informatika" << endl;
  cout << "2. Sistem Informasi" << endl;
  cout << "3. Sistem Komputer" << endl;
  cout << "4. Keluar" << endl;
  cout << "Masukkan pilihan Anda (1-4): ";

  int pilihan;
  cin >> pilihan;
  return pilihan;
}

// Fungsi untuk menentukan biaya kuliah perjurusan berdasarkan pilihan pengguna
int TentukanBiayaKuliah(int pilihan, Jurusan jurusan[]) {
  if (pilihan < 1 || pilihan > 3) {
    // Jika pilihan pengguna tidak valid, kembalikan nilai -1
    return -1;
  }
  // Kembalikan biaya kuliah perjurusan yang dipilih pengguna
  return jurusan[pilihan - 1].biaya;
}

int main() {

  while (true) {
    // Tampilkan menu dan minta input pilihan dari pengguna
    int pilihan = TampilkanMenu();

    if (pilihan == 4) {
      // Jika pengguna memilih keluar, berhenti looping
      break;
    }

    // Tentukan biaya kuliah perjurusan yang dipilih pengguna
    int biaya = TentukanBiayaKuliah(pilihan, jurusan);
    if (biaya == -1) {
      system("cls");
      // Jika pilihan pengguna tidak valid, tampilkan pesan error
      cout << "Pilihan tidak valid." << endl;
      system("pause");
    } else {
      system("cls");
      // Tampilkan biaya kuliah perjurusan yang dipilih pengguna
      cout << "Biaya kuliah jurusan " << jurusan[pilihan - 1].nama << " adalah Rp. " << biaya << endl;
      system("pause");
    }
  }

  return 0;
}