#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    for (int x = 1; x <= 10 ; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << setw(4) << x*y << " ";
        }
        cout << endl;
    }
    
    return 0;
}
