#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> m;
    int x;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    
    map<int, int> :: iterator it = m.begin();

    int cnt = 0;
    for (; it != m.end(); it++)
    {
        if(it -> second > 1)
        cnt++;
    }
    cout << cnt;
}