#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, sum = 0, c, max = 100000;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        if (sum < max)
        {
            max = sum;
            c = i + 1;
        }
        sum = 0;
    }
    cout << c;

    return 0;
}