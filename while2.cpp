#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;

    while (x != 99)
    {
        cout << "Masukkan Angka: " << endl;
        cin >> x;

        cout << "Angka Yang Di Input: " << x << endl;
    }
    
    return 0;
}
