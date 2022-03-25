#include<iostream>

using namespace std;

int main()
{
    int sum=0,n=1;
    int A[10000];
    for(int i=0;i<10000;i++)
    {
        cin>>A[i];
        sum+=A[i];
        if(cin.peek()=='\n')break;

    }cout<<sum;

    return 0;
}