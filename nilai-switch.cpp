#include <iostream>
using namespace std;


int main() {
    system("cls");
    int nilai;
    char hm;

    cout << "Masukkan Nilai: ";
    cin >> nilai;
    
    switch (nilai)
    {
    case 80 ... 100:
        hm = 'A';
        break;
    case 70 ... 79:
        hm = 'B';
        break;
    case 60 ... 69:
        hm = 'C';
        break;
    case 50 ... 59:
        hm = 'D';
        break;
    case 49:
        hm = 'E';
        break;
    default:
        cout << "Out OFF Range!!!" << endl;
        break;
    }
    cout << "Huruf Mutu : " << hm << endl;
    system("pause");
    return 0;
}
