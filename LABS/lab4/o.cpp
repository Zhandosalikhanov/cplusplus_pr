#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, maximal = -100000, cnt = 0,p=0,h=0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (a[i][j] > maximal)
                {
                    maximal = a[i][j];
                }
            }
        }
    }
    cout << "Maximum element is: " << maximal << " with ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == maximal)
            {
                cnt++;
                if (cnt == 1)
                {
                    cout << "coordinates: " << i + 1 << ";" << j + 1 << endl;
                }
            }
        }
    }
    return 0;
}