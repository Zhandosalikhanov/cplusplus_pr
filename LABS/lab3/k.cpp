#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int A[n];
    //srand (time(NULL));
    for (int i(0); i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (A[i] == A[i + 1] || A[i] == A[n - i])
        {
            i++;
            cin.clear();
        }

        cout << A[i] << " ";
    }
    return 0;
}