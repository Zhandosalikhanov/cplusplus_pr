#include <bits/stdc++.h>
using namespace std;

bool isPal(vector <int> v)
{
    vector <int> v1 = v;
    reverse(v.begin(), v.end());

    if(v == v1) 
    return 1;

    return 0;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int x;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    do
    {
        if(isPal(v))
        {
            for (size_t i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << "Impossible";
}