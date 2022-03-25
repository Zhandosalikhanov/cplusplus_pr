#include <bits/stdc++.h>

using namespace std;

string f(string s, int l, int r)
{   
    if (l > s.size() / 2)
    {
        return "Yes";
    }else if(s[l] == s[r])
    {
        return f(s, ++l, --r);
    }
    return "No";
}

int main()
{
    string s;
    cin >> s;
    int l = 0, r = s.size() - 1;
    cout << f(s, l, r);
}