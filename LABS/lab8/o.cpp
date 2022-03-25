#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> v;
    for (size_t i = 0; i < s.size(); i++)
    {
        v.insert(tolower(s[i]));
    }
    set<char> :: iterator it;
    cout << v.size() << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}