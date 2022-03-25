#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int N, a, b, c, d;

    cout << "enter N: ";
    cin >> N;

    a = N % 2;
    N /= 2;
    b = N % 2;
    N /= 2;
    c = N % 2;
    N /= 2;
    d = N % 2;

    cout << d + 2 * c + 4 * b + 8 * a << endl;

    cout << a;
}