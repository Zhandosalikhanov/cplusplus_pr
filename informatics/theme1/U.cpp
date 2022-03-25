#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, e, s;
    cin >> a >> b;
    c = a % b;
    d = b % a;
    cout << c * d + 1;
    return 0;
}