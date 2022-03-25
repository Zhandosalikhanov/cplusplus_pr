#include <bits/stdc++.h>

using namespace std;

int f(string s, int i)
{   
    if(i == s.size())
    return 0;

    return (s[i] - 48) / 2 + f(s, ++i);
}

int main()
{
    string s;
    cin >> s;
    int i = 0;
    cout << f(s, i);
}