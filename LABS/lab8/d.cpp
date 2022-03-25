#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, k;
    cin >> n;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    v.erase(v.begin() + k);
    vector<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    

      
}