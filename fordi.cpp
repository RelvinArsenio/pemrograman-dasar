#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_siswa;
    string jenis_kelamin;
    string semester;
    string jurusan;
    string barang1;
    string barang2;
    string barang3;
    int jumlBarang1;
    int jumlBarang2;
    int jumlBarang3;
    int bayar1;
    int bayar2;
    int bayar3;
    int ppn;
    int totalBayar;
    int total;
    int totalbarang;
    int uang;
    int kembali;

    cout<<"Nama Siswa/i               : ";
    getline(cin, nama_siswa);
    cout<<"Jenis Kelamin [Pria/Wanita]: ";
    getline(cin, jenis_kelamin);
    cout<<"Semester                   : ";
    getline(cin, semester);
    cout<<"Masukkan nama Jurusan      : ";
    getline(cin, jurusan);
    cout<<"Nama Barang Pertama        : ";
    getline(cin,barang1);
    cout<<"Nama Barang Kedua          : ";
    getline(cin,barang2);
    cout<<"Nama Barang Ketiga         : ";
    getline(cin,barang3);
    cout<<"Jumlah Barang Pertama      : ";
    cin>>jumlBarang1;
    cout<<"Jumlah Barang Kedua        : ";
    cin>>jumlBarang2;
    cout<<"Jumlah Barang Ketiga       : ";
    cin>>jumlBarang3;
    cout<<"Harga Barang Pertama       : Rp ";
    cin>>bayar1;
    cout<<"Harga Barang Kedua         : Rp ";
    cin>>bayar2;
    cout<<"Harga Barang Ketiga        : Rp ";
    cin>>bayar3;
    cout<<"Jumlah Uang yang diberikan ke kasir : Rp ";
    cin>>uang;

  
    totalBayar = bayar1 + bayar2 + bayar3;  
    ppn = totalBayar*10/100;
    total = totalBayar + ppn;
    totalbarang = jumlBarang1 + jumlBarang2 + jumlBarang3;
    kembali = uang-total;

    cout<<"========================================="<<endl;
    cout<<"|| Struk Pembayaran Belanja Supermarket"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"||Nama Siswa/i  : "<<nama_siswa<<endl;
    cout<<"||Jenis Kelamin : "<<jenis_kelamin<<endl;
    cout<<"||Semester      : "<<semester<<endl;
    cout<<"||                                     "<<endl;
    cout<<"||Barang Pertama                  : "<<barang1<<endl;
    cout<<"||Harga Barang yang harus Dibayar : Rp "<<bayar1<<endl;
    cout<<"||Jumlah Barang Pertama ada       : "<<jumlBarang1<<endl;
    cout<<"||                                     "<<endl;
    cout<<"||Barang Kedua                    : "<<barang2<<endl;
    cout<<"||Harga Barang yang harus Dibayar : Rp "<<bayar2<<endl;
    cout<<"||Jumlah Barang Kedua ada         : "<<jumlBarang2<<endl;
    cout<<"||                                     "<<endl;
    cout<<"||Barang Ketiga                   : "<<barang3<<endl;
    cout<<"||Harga Barang yang harus Dibayar : Rp "<<bayar3<<endl;
    cout<<"||Jumlah Barang Ketiga ada        : "<<jumlBarang3<<endl;
    cout<<"||                                     "<<endl;
    cout<<"||Uang yang Diterima             : Rp "<<uang<<endl;
    cout<<"||Total pembayaran               : Rp "<<totalBayar<<endl;
    cout<<"||Jumlah PPN                     : Rp "<<ppn<<endl;
    cout<<"||Total Harga yang harus Dibayar : Rp "<<total<<endl;
    cout<<"||Kembalian yang diterima        : Rp "<<kembali<<endl;
    cout<<"||Jumlah Barang yang dibeli      : "<<totalbarang<<" Item"<<endl;
    cout<<"========================================="<<endl;
    cout<<"========= x x TERIMA  KASIH x x ========="<<endl;
    cout<<"========================================="<<endl;

    return 0;
}