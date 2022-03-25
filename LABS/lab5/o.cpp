#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int max = 96;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) > max)
        {
            max = int(s[i]);
        }
    }
    cout << char(max) << endl;
}
