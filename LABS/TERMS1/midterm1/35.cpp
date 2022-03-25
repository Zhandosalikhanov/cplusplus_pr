#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 1; i < n; i++)
    {
        if(a[i - 1] <= a[i])
        {
            k--;
        }else{
            k *= 2;
        }
    }
    cout << k;
}