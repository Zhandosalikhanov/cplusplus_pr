#include <bits/stdc++.h>

using namespace std;

string f(int x, int i)
{
    if(pow(2, i) > x)
    {return "NO";}

    if(pow(2, i) == x)
    {return "YES";}

    return f(x, ++i);
}

int main()
{
    int n, j = 0, x = 0;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        x = x xor a[i];
    }
    cout << f(x, j);
}