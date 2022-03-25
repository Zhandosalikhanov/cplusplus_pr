#include <iostream>

using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        a += j + 1;
    }
    cout << a << endl;
    return 0;
}