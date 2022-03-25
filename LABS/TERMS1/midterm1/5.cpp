#include <bits/stdc++.h>

using namespace std;

unsigned long long f(unsigned long long x, unsigned long long y)
{
    return x xor y;
}

unsigned long long g(unsigned long long x, unsigned long long y)
{
    return f(x, f(y, x + y));
}

int main()
{
    unsigned long long a, b;
    cin >> a >> b;
    cout << g(a, b);
}