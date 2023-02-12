#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int64_t jam, menit, detik;
    cout << "Masukkan Jam: ";
    cin >> jam;

    if (jam < 0)
    {
        cout << "Jam " << jam << " Bukan Angka Yang Benar" << endl;
    }
    else
    {
        menit = jam * 60;
        detik = menit * 60;
    
        cout << "Jam: " << jam << endl;
        cout << "Menit: " << menit << endl;
        cout << "Detik: " << detik << endl;
    }
    

    return 0;
}
