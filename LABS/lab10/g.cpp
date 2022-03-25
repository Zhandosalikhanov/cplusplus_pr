#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map< pair< pair<string, int>, pair<string, int> >, int> m;
    string s, s1;
    int x, x1;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s >> x >> s1 >> x1;
        m.insert(pair< pair< pair<string, int>, pair<string, int> >, int > (make_pair(make_pair(s, x), make_pair(s1, x1)), x + x1));
    }
    
    map< pair< pair<string, int>, pair<string, int> >, int> :: iterator it = m.begin();

    for (; it != m.end(); it++)
    {
        cout << (*it).first.first.first << " and " << (*it).first.second.first << " " << it -> second << endl;
    }
    
}