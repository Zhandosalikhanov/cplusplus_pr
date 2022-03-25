#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    map<int, int> m;

    cin >> n >> k;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        if(x == k) m[k]++;
    }
    cout << m[k];
}