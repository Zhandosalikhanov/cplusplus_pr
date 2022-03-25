#include <bits/stdc++.h>
using namespace std;

int m(vector<int> v);
int it(vector<int> v);

int main()
{
    vector<int> v;
    int n, x;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (size_t i = 0; i < v.size() + (n - 1); i++)
    {
        cout << m(v) << " ";
        v.erase(v.begin() + it(v));
    }
    
}

int m(vector<int> v)
{
    int min = INT_MAX;
    for (size_t i = 0; i < v.size(); i++)
    {
        if(v[i] < min)
        min = v[i];
    }
    return min;
}

int it(vector<int> v)
{
    int min = INT_MAX, it;
    for (size_t i = 0; i < v.size(); i++)
    {
        if(v[i] < min)
        {
            min = v[i];
            it = i;
        }
    }
    return it;
}