#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> x;
    sort(v.begin(), v.end());
    vector<int> :: iterator it;
    for (it = v.begin(); it != v.begin() + x; it++)
    {
        cout << *it << " ";
    } 
}