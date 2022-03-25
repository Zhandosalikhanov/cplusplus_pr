#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    cout << 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j != 0;)
        {
            if (j % 2 == 1)
            {
                cnt++;
            }
            j /= 2;
        }
        if (i != n)
        {
            cout << cnt;
        }
        else
        {
            cout << cnt;
        }
        cnt = 0;
    }
}