#include <bits/stdc++.h>
using namespace std;
void ar(int x)
{
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = x-1; i > -1; i--)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int x;
    cin >> x;
    ar(x);
    return 0;
}