#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i = 1;
    float nilai, rata, jumlah = 0;
    cout << "Input Jumlah Nilai: ";
    cin >> n;
    while (i <= n)
    {
        cout << "Input Angka Ke " << i << " : ";
        cin >> nilai;
        jumlah = jumlah + nilai;
        rata = jumlah / n;
        i++;
    }
    cout << "\nTotal Nilai: " << jumlah;
    cout << "\nRata Rata Nilai: " << rata;
    
    return 0;
}
