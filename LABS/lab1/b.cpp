#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n;
    cin >> k;

    m = k / 100 + k % 10;
    cout << m + n;
    return 0;
}
