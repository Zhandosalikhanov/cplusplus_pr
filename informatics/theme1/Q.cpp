#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int v, s, r, t, o;
    cin >> v >> s;
    r = s % v;
    t = s / v;
    o = r - 1;
    cout << t + r / (r + 1 - (r - abs(o))); 
    return 0;
}