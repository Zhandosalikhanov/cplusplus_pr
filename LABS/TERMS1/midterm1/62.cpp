#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string s, int i);

int main()
{
    string s;
    cin >> s;
    int i = 0;
    cout << titleToNumber(s, i);
}

int titleToNumber(string s, int i)
{
    if(i == s.size())
    return 0;

    return pow(26, s.size() - 1 - i) * int(s[i] - 64) + titleToNumber(s, ++i);
}