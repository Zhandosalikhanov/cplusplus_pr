#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           if(i%j==0 && i!=1)
           {
               cnt++;
           }

        }
        if(cnt==2)
        {
            cout<<i<<" is prime"<<endl;
        }
        cnt=0;
    }

    return 0;
}