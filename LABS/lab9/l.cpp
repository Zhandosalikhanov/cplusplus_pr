#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v;

    for (size_t i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(x + y);
    }

    map<int, int> m;
    for (size_t i = 1; i < n + 1; i++)
    {
        m[v[i - 1]] = i;
    }
    
    map<int, int> :: iterator it = m.begin();
    for (; it != m.end(); it++)
    {
        cout << it -> second << " ";
    }
    
}