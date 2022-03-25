#include <bits/stdc++.h>
using namespace std;

int sum(string s, int i)
{
    if(i == s.size())
    return 0;

    return (s[i] - 48) + sum(s, ++i);
}
int main()
{
    string s;
    int i = 0;
    cin >> s;
    cout << sum(s, i);
}