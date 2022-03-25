#include <bits/stdc++.h>
using namespace std;

bool per_sq_check(int n)
{
    if((int)sqrt(n) * (int)sqrt(n) == n)
    return true;

    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << per_sq_check(n);
}