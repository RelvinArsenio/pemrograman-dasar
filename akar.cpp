#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    system("cls");
    int b, x, c;
    double y;

    cout << "Masukan Nilai B: ";
    cin >> b;
    
    cout << "Masukkan X: ";
    cin >> x;
    
    cout << "Masukkan C: ";
    cin >> c; 
    
    y = b * (pow(x,2)) + (0.5 * x) - c;
    cout << "Hasil Persamaan Kuadrat: " << y << endl;
    system("pause");
    
    return 0;
    
}