#include <bits/stdc++.h>

using namespace std;

void ters(int n)
{
 int a[n],b[n],c[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
       cin>>b[i];
   }
   for(int i=0;i<n;i++)
   {
       c[i]=b[i]-a[i];
       if(c[i]<0)
       {
           c[i]*=-1;
       }
       cout<<c[i]<<" ";
   }
}
int main()
{
    int n,a[n],b[n],c[n];
    cin>>n;
    ters(n);
    return 0;
}