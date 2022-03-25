#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    set<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.insert(x);
    }
    set<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        if(*it % 2 != 0)
        cout << *it << " ";
    }
}