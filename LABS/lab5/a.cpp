#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0, c = 0;
    string s;
    char b = 65, d = 90, g = 97, k = 122;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= b && s[i] <= d)
        {
            a++;
        }
        else if (s[i] >= g && s[i] <= k)
        {
            c++;
        }
    }
    cout << c << " " << a << endl;
}