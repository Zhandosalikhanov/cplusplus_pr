#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = s.size() - 1; i > -1; i--)
    {
        if(int(s[i] - 48) >= 0 && int(s[i] - 48) < 10)
        cout << s[i];
    }
    
}