#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, d, c, di, ci;
    cin >> d >> c >> n >> di >> ci;

    d = (d + (c / 100)) * n;
    di += ci / 100;
    double di2 = di;
    di -= d;
    int di1 = di;
    ci = di - di1;

    if(di2 >= d)
    {
        cout << di1 << " " << ci * 100;
    }else{
        cout << -1;
    }  
}