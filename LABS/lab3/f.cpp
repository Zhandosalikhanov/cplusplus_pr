#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = n-1; i>=0 ; i--)
    {
        cout << A[i]<<" ";
    }
    return 0;
}