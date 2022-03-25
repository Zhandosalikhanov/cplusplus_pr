#include <bits/stdc++.h>

using namespace std;

int beka(int n, int x)
{
    if(x == 0)
    return 1;

    return n * beka(n, x - 1);
}

int main()
{
    int n, x;
    cin >> n >> x;
    cout << beka(n, x) << endl;
    return 0;
}
