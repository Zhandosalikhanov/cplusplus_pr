#include <bits/stdc++.h>
using namespace std;

void num(int n, int m)
{
    if (n == m)
    {
        cout << "Yes";
    }
    else if (n < m)
    {
        cout << "No";
    }
    else{
        num(n,m*2);
    }
}

int main()
{
    int n, m=1;
    cin >> n;
    num(n, m);

    return 0;
}