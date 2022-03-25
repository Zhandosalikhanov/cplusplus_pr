#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int maxi = A[0], mini = A[0];
    for (int i = 0; i < n; i++)
    {
         if (A[i] > maxi)
        {
            maxi = A[i];
       
        }
        if (A[i] < mini)
        {
            mini = A[i];
           
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] == maxi)
        {
            A[i] = mini;
        }

        cout << A[i]<<" ";
    }

    return 0;
}