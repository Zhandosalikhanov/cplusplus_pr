#include <bits/stdc++.h>
using namespace std;

string f(vector<int> v, int x);

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
    cout << f(v, x);
}

string f(vector<int> v, int x)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        if(v[i] == x)
        return "Yes";
    }
    return "No";
}
