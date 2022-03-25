#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i]%2!=0)
        {
            cout << A[i]<<" ";
        }
    }

return 0;
}