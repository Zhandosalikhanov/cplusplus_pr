#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}

bool comp(int x, int y)
{
    if(x % 2 == 0 && y % 2 == 1) return true;
    if(x % 2 == 1 && y % 2 == 0) return false;
    if(x % 2 == 0 && y % 2 == 0) return y < x;
    if(x % 2 == 1 && y % 2 == 1) return x < y;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end(), comp);
    print(v);
}