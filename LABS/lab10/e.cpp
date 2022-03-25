#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    map<string, double> mp;
    double sum = 0;
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> m;
        for (size_t j = 0; j < m; j++)
        {
            string s;
            int x;
            cin >> s >> x;
            mp[s] += x;
            sum += x;
        }
    }

    map<string, double> :: iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it -> first << " " << ((it -> second) * 100) / sum << endl;
    }
    
}