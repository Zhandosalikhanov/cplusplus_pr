#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int pos = 0;
    int index;
    while (t.find(s, pos) != string::npos)
    {
        index = t.find(s, pos);
        pos = index + 1;
    }
    if (index + s.size() == t.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}