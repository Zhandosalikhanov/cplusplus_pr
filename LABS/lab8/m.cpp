#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    set<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.insert(x);
    }
    x = 0;
    set<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        x += *it;
    }
    cout << x;
}