#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0, cnt1 = 0;
    cin >> n;
    string s;
    for (; n != 0; n /= 2)
    {
        if (n % 2 == 0)
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
        s.push_back(char((n % 2) + 48));
    }
    reverse(s.begin(), s.end());
    cout << s << endl
         << "zeros " << cnt << endl
         << "number of units " << cnt1 << endl;
}