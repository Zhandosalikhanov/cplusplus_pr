#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int x;
    map<string, set<int> > m;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s >> x;
        m[s].insert(x);
    }
    
    map<string, set<int> > :: iterator it = m.begin();
    for (; it != m.end(); it++)
    {
        if((it -> second).size() > 2)
        cout << it -> first << " +1" << endl;
        else
        cout << it -> first << " NO BONUS" << endl;
    }
    
}