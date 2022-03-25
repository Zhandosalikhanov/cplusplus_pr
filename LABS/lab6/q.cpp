#include <iostream>

using namespace std;

void girls(int n, int m)
{
    cout.precision(6);
    cout << (float)m * 100 / n;
}

int main()
{
    int n, m;
    cin >> n >> m;
    girls(n, m);
    return 0;
}