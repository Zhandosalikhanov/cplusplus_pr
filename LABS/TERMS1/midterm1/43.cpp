#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum = 0, b[n];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        b[i] = sum / m;
        sum = 0;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    
}