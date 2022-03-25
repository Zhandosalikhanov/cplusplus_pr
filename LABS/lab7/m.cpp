#include <bits/stdc++.h>

using namespace std;

void f(int n, int i)
{   
    cout << i << " ";
    if(i != n)
    {f(n, ++i);}

}

int main()
{
    int n, i = 1;
    cin >> n;
    f(n, i);
}