#include <iostream>

#include<cmath>

using namespace std;

int main()
{
    int n,even=0,odd=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];

    }
    
    for(int i=0;i<n;i++)
    {
        if((A[i]%2)==0)
           even+=1;
        else
        odd+=1;
        
    }
    cout<<even <<" "<< odd;
    return 0;
}