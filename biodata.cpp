#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string nama;
    int umur;
    char jenis_kelamin;
    
    //---Proses Input---//
    cout << "Siapa Namamu?: ";
    getline(cin,nama);

    cout << "Berapa Umurmu?: ";
    cin >> umur;

    cout << "Jenis Kelamin [L/P]: ";
    cin >> jenis_kelamin;

    /***Proses Output***/
    cout << "Hai " << nama << ", Kamu Sekarang Berusia " << umur << "Dan Kamu Berjenis Kelamin " << jenis_kelamin << endl;

    return 0;
}
