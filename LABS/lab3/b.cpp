#include <iostream>

using namespace std;

int main()
{
    int n,cont=0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i]>0)
        {
            cont++;
        }
    }cout<<cont;

return 0;
}