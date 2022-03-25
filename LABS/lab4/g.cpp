#include <bits/stdc++.h>

using namespace std;
using std::ios_base;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n - 1 == i + j)
            {
                cout << i + 1;
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}