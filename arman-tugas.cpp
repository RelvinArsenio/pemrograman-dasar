#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct data_barang{
    string merek;
    int total_harga, jumlah_pembelian, uang_pembayaran, harga, kembalian;
    short diskon;
};
data_barang batas[100];
int a,b,c,d;

void inputdata() {
    cout << "Total data yang di input: ";
    cin >> b;
    d = 0;
    for (c = 0; c < b; c++)
    {
        d = d + 1;
        cout << "Data ke: " << d << endl;
        cout << "Masukkan nama barang: ";
        cin.ignore();
        getline(cin, batas[a].merek);

        cout << "Masukkan jumlah pembelian: ";
        cin >> batas[a].jumlah_pembelian;

        cout << "Masukkan uang pembayaran: ";
        cin >> batas[a].uang_pembayaran;

        cout << "Masukkan harga: ";
        cin >> batas[a].harga;

        cout << "Masukkan Diskon [0 - 100]%: ";
        cin >> batas[a].diskon;

        if (batas[a].diskon > 100 || batas[a].diskon < 0)
        {
            cout << "Nilai Diskon salah, diskon di atur menjadi 0%\n";
            batas[a].diskon = 0;
        }
        a++;
    }
    system("pause");
    system("cls");
}

void lihatdata() {
    int i,j = 0;
    
    
    cout << "\n==============================================================================================================" << endl;
    cout << setw(5) << left << "No."
        << setw(20) << left << "Nama Barang Pemesanan"
        << setw(10) << right << "Jumlah"
        << setw(15) << right << "Harga Satuan"
        << setw(20) << right << "Uang Pembayaran"
        << setw(15) << right << "Total Harga"
        << setw(15) << right << "Kembalian"
        << setw(10) << right << "Diskon" << endl;
    cout << "=================================================================================================================" << endl;
    for (i = 0; i < a; i++)
    {
        batas[i].total_harga = (batas[i].harga * batas[i].jumlah_pembelian) - batas[i].harga * batas[i].diskon / 100;
        batas[i].kembalian = batas[i].total_harga - batas[i].uang_pembayaran;
        j = j + 1;
        cout << setw(5) << left << j
            << setw(20) << left << batas[i].merek
            << setw(10) << right << batas[i].jumlah_pembelian
            << setw(15) << right << fixed << setprecision(2) << batas[i].harga
            << setw(20) << right << fixed << setprecision(2) << batas[i].uang_pembayaran
            << setw(15) << right << fixed << setprecision(2) << batas[i].total_harga
            << setw(15) << right << fixed << setprecision(2) << batas[i].kembalian
            << setw(10) << right << fixed << setprecision(2) << batas[i].diskon << "%" << endl;
    }
    
    system("pause");
    system("cls");
}

void editdata() {
    int k,l;
    cout << "Masukkan no data yang akan di edit: ";
    cin >> k;
    l = k - 1;

    cout << "Masukkan Nama Barang: ";
    cin.ignore();
    getline(cin, batas[l].merek);

    cout << "Masukkan Jumlah Pembelian: ";
    cin >> batas[l].jumlah_pembelian;

    cout << "Masukkan Uang Pembayaran: ";
    cin >> batas[l].uang_pembayaran;

    cout << "Masukkan Harga: ";
    cin >> batas[l].harga;

    cout << "Masukkan Diskon [0 - 100]%: ";
    cin >> batas[l].diskon;

    if (batas[l].diskon > 100 || batas[l].diskon < 0)
    {
        cout << "Nilai Diskon Salah, Diskon Di Atur Menjadi 0%\n";
        batas[l].diskon = 0;
    }
    lihatdata();
}

void hapusdata() {
    int x,y;
    cout << "Hapus Data Ke: ";
    cin >> x;
    y = x - 1;
    a--;
    for (int i = y; i < a; i++)
    {
        batas[i] = batas[i+1];
    }
    system("cls");

    cout << "========================================" << endl;
    cout << setw(16) << right << "Data Ke -"<< x <<" Telah Di Hapus" << endl;
    cout << "========================================" << endl;

    system("pause");
    system("cls");
}

// Fungsi untuk menampilkan tanggal pembelian
void tampilkan_tanggal() {
    time_t t = time(0);
    struct tm * now = localtime(&t);
    cout << (now->tm_year + 1900) << '-' 
       << (now->tm_mon + 1) << '-'
       << now->tm_mday
       << endl;
}

int main() {
    system("color b");
    int pilih;
    char exit;

    cout << "==========================================" << endl;
    cout << setw(38) << right << "Indomaret Imam Bojol Segala Mider" << endl;
    cout << setw(35) << right << "Created By M.Arman Syahputra" << endl;
    cout << setw(20); tampilkan_tanggal();
    cout << "==========================================" << endl;
    system("pause");
    system("cls");
    awal:
    cout << "========================================" << endl;
    cout << setw(5) << left << "No." << setw(25) << left << "Menu" << endl;
    cout << "========================================" << endl;
    cout << setw(5) << left << "1" << setw(25) << left << "Masukkan Data" << endl;
    cout << setw(5) << left << "2" << setw(25) << left << "Tampilkan Data" << endl;
    cout << setw(5) << left << "3" << setw(25) << left << "Edit Data" << endl;
    cout << setw(5) << left << "4" << setw(25) << left << "Hapus Data" << endl;
    cout << setw(5) << left << "5" << setw(25) << left << "Keluar" << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        system("cls");
        inputdata();
        goto awal;
        break;
    case 2:
        system("cls");
        lihatdata();
        goto awal;
        break;
    case 3:
        system("cls");
        editdata();
        goto awal;
        break;
    case 4:
        system("cls");
        hapusdata();
        goto awal;
        break;
    case 5:
        system("cls");
        cout << "Yakin ingin Keluar? [Y/n]: ";
        cin >> exit;
        if (exit == 'y' || exit == 'Y')
        {
            system("cls");
            cout << "=========================================" << endl;
            cout << setw(29) << right << "Program Selesai." << endl;
            cout << "=========================================" << endl;
        } else if (exit == 'n' || exit == 'N')
        {
            system("cls");
            goto awal;
        } else
        {
            system("cls");
            cout << "Input Salah" << endl;
            system("pause");
            system("cls");
        }
        break;
    default:
        system("cls");
        cout << "Input Salah" << endl;
        system("pause");
        system("cls");
        goto awal;
        break;
    }
    return 0;
}