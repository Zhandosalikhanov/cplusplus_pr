#include <bits/stdc++.h>
using namespace std;

int size(int n)
{
    if(n == 0)
    return 0;

    return 1 + size(n / 10);
}

int f(int n)
{
    if(n == 0)
    return 0;

    return (n % 10) * pow(10, size(n) - 1) + f(n / 10);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a + (n / 2), a + n);
    for (size_t i = n / 2; i < n; i++)
    {
        a[i] = f(a[i]);
    }
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    
    for (size_t i = 0; i < n / 2; i++)
    {
        if(a[i] != a[i + (n / 2)])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}