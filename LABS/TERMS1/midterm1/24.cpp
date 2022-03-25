#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    size_t i = 0;
    for (; sum < 500000; i++)
    {
        sum += n * 0.3;
        n += 0.1 * n;
    }
    cout << i;
}