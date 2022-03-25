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
    cout << v.size();
}