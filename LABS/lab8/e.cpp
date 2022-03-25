#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, l, r;
    cin >> n;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> l >> r;
    v.erase(v.begin() + l, v.begin() + r + 1);
    vector<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    

      
}