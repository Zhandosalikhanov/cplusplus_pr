#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]%10==7)
         sum+=1;
    }
    cout<<sum;

    return 0;
}