#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];
    map<long long, long long> m;
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    long long cnt = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if(m[a[i] ^ a[j]] != 0) cnt++;
        }
        
    }
    cout << cnt;
}