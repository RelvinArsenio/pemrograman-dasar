#include <iostream>
using namespace std;

int main() {
    system("cls");

    for (int i = 1; i <= 30; i++)
    {
        if (i %2 == 0)
        {
           if (i == 10 || i == 20)
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
