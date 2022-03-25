#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k, r, o;
    cin >> n >> k;
    r = k % n;
    o = r - 1;
    cout << n * r / (r + 1 - (r - abs(o))) - r; 
    return 0;
}