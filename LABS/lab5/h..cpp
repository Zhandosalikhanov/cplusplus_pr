#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, ans;
    cin >> s;
    size_t n = s.size(), cnt = 0, a[n], i1 = 0;
    sort(s.begin(), s.end());

    for (size_t i = 0; i < n; i++, i1++)
    {
        while (s[i] == s[i - 1])
        {
            i++;
        }

        for (size_t j = i; j < n; j++)
        {
            s1 = s.substr(j, n);
            if (s1.find(s[i]) != -1)
            {
                cnt++;
            }
        }
        if (cnt == 0)
            break;
        a[i1] = cnt;
        cnt = 0;
    }

    for (size_t i = 0; i < i1 - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            ans = "YES";
        }
        else
        {
            ans = "NO";
        }
    }

    cout << ans << endl;

    return 0;
}