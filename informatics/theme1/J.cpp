#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    b = a % 2;
    cout << a + (2 - b);
    return 0;
}