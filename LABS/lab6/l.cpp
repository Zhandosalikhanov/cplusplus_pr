#include <bits/stdc++.h>
using namespace std;

string valid(string s, int x)
{
    int n = s.size(), a[n], n1 = 0, cnt = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            a[n1] = s[i];
            n1++;
        }
    }
    sort(a, a + n1);

    if (n1 == 1)
    {
        return "Valid";
    }

    if (n1 == 0)
    {
        return "Not valid";
    }

    for (size_t i = 0; i < n1; i++)
    {
        for (int j = i; j < n1; j++)
        {
            if (a[i] == a[j] -1)
            {
                cnt++;
            }
        }
    }
    if (cnt >= x)
        return "Valid";

    return "Not valid";
}

int main()
{
    string s;
    int x;
    cin >> s;
    cin >> x;
    cout << valid(s, x);
}