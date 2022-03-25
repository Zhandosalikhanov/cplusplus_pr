#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    set< pair<int, int> > s;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 1; i < n; i++)
    {
        if(a[i] == a[i - 1])
        s.insert(make_pair(a[i], a[i - 1]));
    }

    cout << s.size();
}