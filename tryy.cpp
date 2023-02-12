#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct data_barang{
    string nama;
    int totalHarga, jumlahBarang, tunai, harga, kembalian;
};
data_barang batas[100];
int i,j,k,l;

void inputdata() {
    cout << "Banyak barang yang di input = ";
    cin >> j;
    l = 1;
    for (k = 0; k < j; k++)
    {
        cout << "Data ke-" << l << endl;
        cout << "Input nama barang = ";
        cin.ignore();
        getline(cin, batas[i].nama);

        cout << "Input jumlah barang = ";
        cin >> batas[i].jumlahBarang;

        cout << "Input uang pembayaran = ";
        cin >> batas[i].tunai;

        cout << "Input harga = ";
        cin >> batas[i].harga;
        i++; l++;
    }
    system("pause");
    system("cls");
}

void lihatdata() {
    int m,n = 0;
    
    
    cout << "\n------------------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << left << "No."
        << setw(20) << left << "Nama Barang"
        << setw(10) << right << "Jumlah"
        << setw(15) << right << "Harga Satuan"
        << setw(20) << right << "Uang tunai"
        << setw(15) << right << "Total Harga"
        << setw(15) << right << "Kembalian" << endl;
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    for (m = 0; m < i; m++)
    {
        batas[m].totalHarga = batas[m].harga * batas[m].jumlahBarang;
        batas[m].kembalian = batas[m].totalHarga - batas[m].tunai;
        n = n + 1;
        cout << setw(5) << left << n
            << setw(20) << left << batas[m].nama
            << setw(10) << right << batas[m].jumlahBarang
            << setw(15) << right << fixed << setprecision(2) << batas[m].harga
            << setw(20) << right << fixed << setprecision(2) << batas[m].tunai
            << setw(15) << right << fixed << setprecision(2) << batas[m].totalHarga
            << setw(15) << right << fixed << setprecision(2) << batas[m].kembalian << endl;
    }
    
    system("pause");
    system("cls");
}

void editdata() {
    int r,s;
    cout << "Input no data yang akan di edit = ";
    cin >> r;
    s = r - 1;

    cout << "Input nama barang = ";
    cin.ignore();
    getline(cin, batas[s].nama);

    cout << "Input jumlah pembelian = ";
    cin >> batas[s].jumlahBarang;

    cout << "Input uang pembayaran = ";
    cin >> batas[s].tunai;

    cout << "Masukkan harga = ";
    cin >> batas[s].harga;

    lihatdata();
}

void hapusdata() {
    int t,u;
    cout << "Hapus data ke-";
    cin >> t;
    u = t - 1;
    i--;
    for (int m = u; m < i; m++)
    {
        batas[m] = batas[m+1];
    }
    system("cls");

    cout << "----------------------------------------" << endl;
    cout << setw(16) << right << "Data ke-"<< t <<" telah berhasil di hapus" << endl;
    cout << "----------------------------------------" << endl;

    system("pause");
    system("cls");
}

void tanggal() {
    time_t t = time(0);
    struct tm * now = localtime(&t);
    cout << (now->tm_year + 1900) << '-' 
       << (now->tm_mon + 1) << '-'
       << now->tm_mday
       << endl;
}

int main() {
    int pilih;
    char exit;

    cout << "-----------------------------------------" << endl;
    cout << setw(31) << right << "ZA PAGAR ALAM UBL 08117974484" << endl;
    cout << setw(33) << right << "JL.ZA PAGAR ALAM KEL LABUHAN RATU" << endl;
    cout << setw(35) << right << "KEC.LABUHAN RATU KOTA BANDAR LAMPUNG, 35142" << endl;
    cout << setw(21); tanggal();
    cout << "-----------------------------------------" << endl;
    system("pause");
    system("cls");
    awal:
    cout << "----------------------------------------" << endl;
    cout << setw(5) << left << "No." << setw(25) << left << "Menu" << endl;
    cout << "----------------------------------------" << endl;
    cout << setw(5) << left << "1" << setw(25) << left << "Input Data" << endl;
    cout << setw(5) << left << "2" << setw(25) << left << "Tampilkan Data" << endl;
    cout << setw(5) << left << "3" << setw(25) << left << "Edit Data" << endl;
    cout << setw(5) << left << "4" << setw(25) << left << "Hapus Data" << endl;
    cout << setw(5) << left << "5" << setw(25) << left << "Keluar" << endl;
    cout << "----------------------------------------" << endl;
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
            cout << "-----------------------------------------" << endl;
            cout << setw(29) << right << "Program Selesai." << endl;
            cout << "-----------------------------------------" << endl;
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
