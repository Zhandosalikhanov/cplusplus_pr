#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, d, sum = 0;
    cin >> n >> a >> d;
    for (int i = 0, j = d; i < n; i++)
    {
        cout << a << " ";
        sum += a;
        a += j;
    }
    cout << endl << "sum: " << sum;
}