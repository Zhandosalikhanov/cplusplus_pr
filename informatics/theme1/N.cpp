#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n, h, m, rem;
    cin >> n;
    rem = n % 2;
    a = n - n / 2;
    h = 9 + (((n/2) * 60 + a * 50) - 15 + (10 * rem)) / 60;
    m = (((n/2) * 60 + a * 50) - 15 + (10 * rem)) % 60;
    cout << h << " " << m;
    return 0;
}