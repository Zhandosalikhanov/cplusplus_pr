#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    cout << 0 << ",";
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = i; j != 0; j /= 2)
        {
            if(j % 2 == 1)
            cnt++;
        }
        if(i != n)
        {
            cout << cnt << ",";
        }
        else{
            cout << cnt;
        }
        cnt = 0;
    }
    
}