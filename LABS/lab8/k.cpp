#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, sum = 0;
    cin >> n;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> x;
    sort(v.begin(), v.end());
    vector<int> :: reverse_iterator it;
    for (it = v.rbegin(); it != v.rbegin() + x; it++)
    {
        sum += *it;
    } 
    cout << sum;
}