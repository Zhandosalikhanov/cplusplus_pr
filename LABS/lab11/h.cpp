#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size(); i++)
    {
        cout << char(((int(s[i]) - 65 + n) % 26) + 65);
    }
    
}