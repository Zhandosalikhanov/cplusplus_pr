#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;

    for (size_t i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        m[s] += x;
    }
    
    map<string, int> :: iterator it = m.begin();
    for (; it != m.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }
    
}