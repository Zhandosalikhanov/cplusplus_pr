#include <bits/stdc++.h>

using namespace std;

int f(string s, int max, int i)
{   
    if(i == s.size())
    {
        return max;
    }
    if(s[i] > max)
    {
        max = s[i];
        return f(s, max, ++i);
    }
    return f(s, max, ++i);
}

int main()
{
    string s;
    cin >> s;
    int max = 0, i = 0;
    cout << f(s, max, i) - 48;
}