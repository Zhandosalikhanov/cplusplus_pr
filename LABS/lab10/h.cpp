#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    map<int, int> m;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
        if(m[x] == 1)
        v.push_back(x);
    }
    
    do
    {
        for (size_t i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    
}