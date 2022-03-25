#include <bits/stdc++.h>

using namespace std;

string beka( string s,int n)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (int(s[i]) >= 48 && int(s[i]) <= 57)
        {
            cnt++;
        }
    }
    if (cnt >= n)
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    int n;
    string s;
    cin >> s >> n;
    cout << beka(s,n) << endl;
    return 0;
}