#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,maxi=-1000000000 ,b=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(a[i][j]>maxi)
            {
                maxi=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(a[i][j]==maxi && b==0)
            {

                cout<<(i+1)<<" "<<(j+1);
                b++;
                break;
            }
            
        }
    }
    return 0;
}
