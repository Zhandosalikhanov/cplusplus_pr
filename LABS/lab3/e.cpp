#include <iostream>

using namespace std;

int main()
{
    int n;
    long long sum=0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    cout << sum;

    return 0;
}