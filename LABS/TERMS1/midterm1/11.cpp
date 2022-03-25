#include <bits/stdc++.h>
using namespace std;

int size(int n)
{
    if(n == 0)
    return 0;

    return 1 + size(n / 10);
}

int main()
{
    double n, k;
    char z;
    cin >> n >> z;
    if(z == 'k')
    cin >> k;

    if(z == 'k')
    {
        cout << setprecision(size(n / 1024) + k) << n / 1024;
    }else{
        cout << n * 1024;
    }
}