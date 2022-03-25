#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max = 0;

    for (size_t i = 0; i < n; i++)
        cin >> a[i];
        
    for (size_t i = 0; i < n; i++)
    {
        int sum = a[i];
        for (size_t j = i + 1; j < n - 1; j++)
        {
            if(a[i] <= a[j]) sum += a[i];
            else break;
        }
        if(sum > max) max = sum;
        sum = 0;
    }

    
    cout << max;
}