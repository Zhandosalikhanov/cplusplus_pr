#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];  
    }
    a[n] = 1000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            continue;
        }
        cout << a[i] << " ";
    }
}