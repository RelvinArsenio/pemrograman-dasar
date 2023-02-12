#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int b, a, e;
    char u[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Masukkan Angka: ";
    cin >> e;

    for(b = 0; b<=e; b++){
        for (a = 0; a<=b; a++)
        {
            cout << setw(2) << u[a] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
