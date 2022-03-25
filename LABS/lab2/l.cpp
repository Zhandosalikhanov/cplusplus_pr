#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, pow = 1;
    cin >> n;

    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << " ";
    }
    return 0;
}