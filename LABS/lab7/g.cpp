#include <bits/stdc++.h>

using namespace std;

unsigned long long sum(int n)
{   
    if(n == 0)
    return 1;

    return n * sum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}