#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v;
    int x;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
        v.push_back(x);
    }

    reverse(v1.begin(), v1.end());
    
    for (size_t i = 0; i < v.size(); i++)
    {
        if(v1[i] == v[i]) cout << "OK" << endl;
        else
            cout << "Instead of " << v[i] << " here was " << v1[i] << endl;
    }
    
}