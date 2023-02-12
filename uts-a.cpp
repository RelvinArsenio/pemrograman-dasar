#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    int maks;

    cout << "Bilangan x: ";
    cin >> x;
    cout << "Bilangan y: ";
    cin >> y;
    cout << "Bilangan z: ";
    cin >>  z;

    if (x > y)
    {
        maks = x;
    }
    else
    {
        maks = y;
    }
    if (z > maks)
    {
        maks = z;
    }

    cout << "Nilai Maximum Dari "<< x << " " << y << " " << z << " Adalah = " << maks << endl;

    return 0;
}