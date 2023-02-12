#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int b, a;
    char u[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Masukkan Angka: ";
    cin >> b;

    for(a = b-1; a>=0; a--){
        cout << u[a] << " ";
    }
    
    return 0;
}
