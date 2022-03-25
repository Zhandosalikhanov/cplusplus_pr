#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d, sum = 0;
    cin >> m >> d;
    if(m < 1 || m > 12 || (d > a[m - 1]) || d < 1)
    {
        cout << "Not correct";
        return 0;
    }
    for (size_t i = m - 1; i < 12; i++)
    {
        sum += a[i];
    }
    sum -= d - 1;
    cout << sum << endl;
    
}