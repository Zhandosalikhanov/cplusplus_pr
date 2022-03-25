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
    sort(v.begin(), v.end());
    vector<int> :: iterator it;
    vector<int> :: iterator it1;
    it = v.begin();
    it1 = v.end() - 1;
    cout << *it1 - *it;
}