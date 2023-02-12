#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    auto t = time(nullptr);
    auto tm = *localtime(&t);

    ostringstream oss;
    oss << put_time(&tm, "%A, %d %B %Y %T %Z");
    auto str = oss.str();

    cout << "Unix Timestamp Dalam Detik: " << t << endl;
    cout << str << endl;
    return 0;
}
