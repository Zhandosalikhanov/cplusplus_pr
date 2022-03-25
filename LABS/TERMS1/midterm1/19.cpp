#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    a -= (a % 10) - 5;
    if(a < 0)
    a = 0;
    
    for (long long i = a; i <= b; i += 5)
    {
        if(i % 100 >= 50 && i % 100 < 60)
        {
            while (i % 50 != 10)
            {
                cout << i << " ";
                i++;
            }
            
        }else{
            if((i - 5) % 10 == 0)
            cout << i << " ";
        }
    }
    
}