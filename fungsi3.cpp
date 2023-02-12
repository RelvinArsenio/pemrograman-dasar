#include <iostream>
using namespace std;

void sayHello(int n) {
    for (int m = 0; m < n; m++)
    {
        cout << "Hallo\n";
    }
    
}

int main()
{
    // system("cls");
    sayHello(5);
    return 0;
}
