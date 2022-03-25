#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a > 99)
    {
        a = a % 100;
    }
    a = a / 10;
    cout << a;
    return 0;
}