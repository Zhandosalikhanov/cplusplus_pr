#include <bits/stdc++.h>
using namespace std;

int isPrime(int x);

int main()
{
    int n, x, cnt = 0;
    cin >> n;
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> x;
    vector<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        if(isPrime(*it) == 1 && *it >= x)
        cnt++; 
    }  
    cout << cnt;
}

int isPrime(int x)
{
    for (size_t i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}