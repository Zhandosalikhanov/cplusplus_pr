#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    int b[n];
    for (size_t i = 0; i < n; i++)
    {
        b[i] = abs(a[i] - k);
    }
    int min = INT_MAX, pos;
    for (size_t i = 0; i < n; i++)
    {
        if(b[i] < min)
        {
            min = b[i];
            pos = i;
        }
    }
    cout << pos;
}