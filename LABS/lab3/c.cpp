#include <iostream>

using namespace std;

int main()
{
    int n,maix=-1000000000;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i]>maix)
        {
            maix=A[i];
        }
    }cout<<maix;

return 0;
}