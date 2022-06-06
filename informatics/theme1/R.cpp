#include <iostream>
#include <cmath>
using namespace std;

/*
n школьников делят k яблок “поровну”, то есть так, чтобы количество яблок, 
доставшихся любым двум школьникам, отличалось бы не более, чем на 1.
*/

int main()
{
    int n, k, r, o;
    cin >> n >> k;
    r = k % n;
    o = r - 1;
    cout << n * r / (r + 1 - (r - abs(o))) - r; 
    return 0;
}