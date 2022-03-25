# include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {  
        sqrt(i);
        cout<<i*i <<endl;
    }
    return 0;
}