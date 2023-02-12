#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    // Ini Cin
    string nama;
    cout << "\n";
    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Hai " << nama << ", Selamat Belajar C++" << endl;
    return 0;
}
