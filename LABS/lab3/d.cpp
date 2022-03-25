#include <iostream>

using namespace std;

int main()
{
    int n, maxi = -1000000000, cont;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] > maxi)
        {
            maxi = A[i];
            cont=i+1;
        }
    }
        cout<<cont;

    
    return 0;
}