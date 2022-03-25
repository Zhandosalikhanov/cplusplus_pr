#include <iostream>

using namespace std;

int main()
{
    int a, n, k;
    cin >> n >> k;
    if (k == 2 && n != 1)
        cout << n << endl;
    
    else if (n == 1 || n <= k)
       cout << 2 << endl;
    
    else if (n % k == 0)
        cout << n / k * 2 << endl;
    
    else if(n - ((n / k)*k) < k)
        cout << (((n / k) * 2) + 2) << endl;
    
    return 0;
    }