#include <bits/stdc++.h>

using namespace std;

void beka(int n)
{
    int a[n], b[n], cnt = 0, sum = 0, v = 1;
    int s[101], d[101];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (size_t i = 0; i < 101; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (v == a[j])
            {
                cnt++;
            }
        }
        s[i] = cnt;
        cnt = 0;
        v++;
    }
    v = 1;
    for (size_t i = 0; i < 101; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (v == b[j])
            {
                cnt++;
            }
        }
        d[i] = cnt;
        cnt = 0;
        v++;
    }

    for (int i = 0; i < 101; i++)
    {
        if (s[i] != 0 && d[i] != 0)
        {
            sum += min(s[i], d[i]);
        }
    }
    cout << sum;
}

int main()
{
    int n;
    cin >> n;
    beka(n);
    return 0;
}