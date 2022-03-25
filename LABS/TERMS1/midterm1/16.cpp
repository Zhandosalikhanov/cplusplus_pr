#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m < 1 || m > 12 || (d > a[m - 1]) || d < 1 || y < 1970 || y > 2035 || (m % 9 == 0 && d > 30))
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES";
    }
    return 0;
}