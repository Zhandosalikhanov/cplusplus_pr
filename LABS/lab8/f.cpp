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
    vector<int> :: iterator it;
    v.insert(v.begin() + l, r);
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    

      
}