#include <iostream>
using namespace std;
int main()
{

    int n;

    cin >> n;
    int d = n - 1;
    int stars = 1;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cin >> a[i][j];
        }
    }
    int p, b;
    int k = a[0][0];
    p = 0;
    b = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j && a[i][j] > k)
            {
                k = a[i][j];
                p = i;
                b = j;
            }
        }
    }
    cout << "Maximum element is: " << k << " with coordinates: " << p + 1 << ";" << b + 1 << endl;
    return 0;
}