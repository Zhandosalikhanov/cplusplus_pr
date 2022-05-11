#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int size(int n)
{
    if (n / 10 == 0)
        return 1;
    return 1 + size(n / 10);
}

bool isInter(int a, int b)
{
    if (a + b + (a * b) == (a * pow(10, size(b))) + b)
        return 1;
    return 0;
}

int main()
{   
    int n;
    cin >> n;

    int cnt = 0;
    for (size_t i = 1; i <= n; i++)
        for (size_t j = 1; j <= n; j++)
            if (isInter(i, j)) cnt++;
        
    cout << cnt;
}