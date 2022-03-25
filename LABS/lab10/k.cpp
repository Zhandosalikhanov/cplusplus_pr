#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if(x == 0 || x == 1) return 0;

    for (size_t i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int a[n];
    int x;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = abs(x);
    }

    cnt = count_if(a, a + n, isPrime);
    cout << cnt;
    
    
}