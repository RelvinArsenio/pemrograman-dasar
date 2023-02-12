#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;

    do
    {
        if (x % 2 == 0)
        {
            cout << x << " ";
        }
        x++;
        
    } while (x <= 10);

    
    return 0;
}
