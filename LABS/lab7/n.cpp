#include <bits/stdc++.h>

using namespace std;

string f(int a[], int n, int k, int i)
{   
    if(n == 0)
    {return "no";}

    if(a[i] + k >= a[i + 1])
    {return "cheater";}

    return f(a, --n, k, ++i);
}

int main()
{
    int n, k, i = 0;
    cin >> n >> k;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    a[n - 1] = INT_MAX;
    cout << f(a, n, k, i);
}