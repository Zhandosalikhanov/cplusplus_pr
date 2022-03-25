#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    if(n == 0 || m == 0)
    {
        cout << "error";
        return 0;
    }
    
    string s;
    vector<string> v;
    vector<int> sum;
    int x, max = INT_MIN;
    int sum1 = 0, pos;
    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
        for (size_t j = 0; j < m; j++)
        {
            cin >> x;
            sum1 += x;
        }
        if(sum1 > max)
        {
            max = sum1;
            pos = i;
        }
        sum.push_back(sum1);
        sum1 = 0;
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cout << v[i] << " - " << sum[i] << endl;
    }
    cout << "The best:" << endl << v[pos] << " " << max;
}