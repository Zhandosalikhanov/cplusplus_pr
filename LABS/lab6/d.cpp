#include <bits/stdc++.h>

using namespace std;

string book(int n, int k)

{
    int a[n], cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cnt++;
        }
    }
    if (cnt > 0)
    {
        return "Yes";
    }

    return "No";
}

int main()
{
    int n, k;
    int a[n];
    cin >> n;
    cout << book(n, k);
    return 0;
}