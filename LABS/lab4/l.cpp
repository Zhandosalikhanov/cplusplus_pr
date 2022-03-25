#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n, m, pos_row = 1, pos_col = 1;
    // long long sum = 0;
    // cin >> n >> m;
    // int a[n][m];
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cin >> a[j][i];
    //     }
    // }
    // cout << "coordinates of min elements:\n";
    // for (int i = 1; i <= m; i++)
    // {
    //     int min = a[i][1];
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (a[i][j] < min)
    //         {
    //             min = a[i][j];
    //             pos_row = j;
    //             pos_col = i;
    //         }
    //     }
    //     sum += min;
    //     cout << pos_row << ";" << pos_col << endl;
    // }
    // cout << "Their sum:\n"
    //      << sum;

    int n, m, row, col;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int min, sum = 0;
    for (int i = 0; i < m; i++)
    {
        min = 100000;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] < min)
            {
                min = a[j][i];
                row = i;
                col = j;
            }
        }
        sum += min;
        cout << "coordinates of min elements:" << endl
             << row + 1 << ';' << col + 1 << endl;
    }
    cout << "Their sum:" << endl;
    cout << sum;
    return 0;
}