#include <iostream>
using namespace std;

struct transaksi {
    string nama_barang;
    int harga_satuan;
    int jumlah_beli;
    int sub_total;
    double diskon;
    double total_harga;
};
transaksi t[100];

int main() {
    system("cls");
    cout << "=======================================" << endl;
    cout << "      TOKO BUKU DARMAJAYA THE BEST" << endl;
    cout << "  Jl. Pramuka No. 35 A Bandar Lampung" << endl;
    cout << "=======================================" << endl;

    int jumlah_transaksi;
    cout << "Jumlah Transaksi: ";
    cin >> jumlah_transaksi;

    int total_sub_total = 0;
    double total_diskon = 0;
    double total_harga = 0;

    for (int i = 0; i < jumlah_transaksi; i++) {
    cout << "\n\nTransaksi ke-" << (i+1) << endl;
    cout << "---------------------------------------" << endl;
    cout << "Nama Barang: ";
    cin.ignore();
    getline(cin, t[i].nama_barang);
    cout << "Harga Satuan: ";
    cin >> t[i].harga_satuan;
    cout << "Jumlah Beli: ";
    cin >> t[i].jumlah_beli;

    t[i].sub_total = t[i].harga_satuan * t[i].jumlah_beli;
    if (t[i].jumlah_beli >= 5) {
        t[i].diskon = t[i].sub_total * 0.03;
    } else {
        t[i].diskon = 0;
    }
    t[i].total_harga = t[i].sub_total - t[i].diskon;

    // menambahkan hasil perhitungan ke variabel total
    total_sub_total += t[i].sub_total;
    total_diskon += t[i].diskon;
    total_harga += t[i].total_harga;

    cout << "---------------------------------------" << endl;
    cout << "Sub Total: " << t[i].sub_total << endl;
    cout << "Diskon: " << t[i].diskon << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total Harga Barang Ini: " << t[i].total_harga << endl;
    cout << "=======================================" << endl;
    }

    cout << "\n\n---------------------------------------" << endl;
    cout << "Total Sub Total: " << total_sub_total << endl;
    cout << "Total Diskon: " << total_diskon << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total Harga Semua Barang: " << total_harga << endl;
    cout << "=======================================" << endl;

    cout << "Programmer: Rizky Juniardi" << endl;

    return 0;
}