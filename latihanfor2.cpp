#include <iostream>
using namespace std;

int main() {
    system("cls");

    for (int i = 0; i <= 30; i++)
    {
        if (i %2 != 0)
        {
            if (i == 15)
            {
                continue;
            } else
            {
                cout << i << " ";
            }
        }
    }
    
    return 0;
}
