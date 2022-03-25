#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b;
    cin >> b;
    if (b == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else if (b < 0)
    {
        for (int i = -b; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i < -b; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        for (int i = n - b; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i < n - b; i++)
        {
            cout << a[i] << " ";
        }
    }
}