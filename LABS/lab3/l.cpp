#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int c[n + m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    int k = 0;
    for (int i = n; i < n + m; i++)
    {
        c[i] = b[k];
        k++;
    }
    sort(c, c + n + m);
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}