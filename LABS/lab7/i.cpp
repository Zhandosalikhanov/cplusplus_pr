#include <bits/stdc++.h>

using namespace std;

int f()
{   
    int x;
    cin >> x;
    if(x != 0)
    return x + f();

    return 0;
}

int main()
{
    cout << f();
}