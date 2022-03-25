#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << gcd(a[n - 1], a[n - 2]);    
}

int gcd(int a, int b)
{
    for (size_t i = min(a, b); i > 0; i--)
    {
        if(a % i == 0 && b % i == 0)
        return i;
    }
    
}