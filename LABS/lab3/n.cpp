#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
    int n,a;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        a=pow(A[i],2);
        cout<<a<<" ";
    }

    return 0; 
    
}