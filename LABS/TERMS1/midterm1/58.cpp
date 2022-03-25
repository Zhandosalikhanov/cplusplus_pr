#include<iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m);
}

int gcd(int a, int b)
{
    int n = max(a, b);
    int q = min(a, b);
    int r = n % q;

    if(b % r == 0)
    return r;

    return gcd(q, r);
}