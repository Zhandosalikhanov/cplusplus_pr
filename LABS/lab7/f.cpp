#include <bits/stdc++.h>

using namespace std;

int sum(string s, int i)
{   
    int x = 0;
    if(i == s.size())
    {
        return 0;
    }
    if(s[i] % 2 == 0)
    {
        x = 1;
    }
    return x + sum(s, ++i);
}

int main()
{
    string s;
    cin >> s;
    int i = 0;
    cout << sum(s, i);
    return 0;
}