#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    vector<int> v;
    for (size_t i = m; i < n; i++)
        v.push_back(a[i]);
    for (size_t i = 0; i < m; i++)
        v.push_back(a[i]);

    reverse(v.begin(), v.end());
    for (size_t i = 0; i < n; i++)
        cout << v[i] << " ";
    
    
    
    
}