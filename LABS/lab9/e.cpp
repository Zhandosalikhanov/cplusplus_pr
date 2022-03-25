#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    string s;

    map<string, int> m;
    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }
    
    map<string, int> :: iterator it = m.begin();

    for (; it != m.end(); it++)
    {
        if(it -> second == 3)
        cnt++;
    }

    cout << cnt;
}