#include <bits/stdc++.h>

using namespace std;

unsigned long long fc(unsigned long long n, unsigned long long i, unsigned long long x, unsigned long long y)
{   
    if(i == n)
    return 0;

    return y + fc(n, ++i, x + y, x);
}

int main()
{
    unsigned long long n, i = 1, x = 0, y = 1;
    cin >> n;
    cout << fc(n, i, x, y);

    return 0;
}