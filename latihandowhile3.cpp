#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("cls");

    for (int x = 3; x <= 10; x++)
    {
        for (int y = 3;  y <= x ; y++)
        {
            cout << setw(4) << y+2 <<" ";
        }
        cout << "\n";
    }
    
    return 0;
}
