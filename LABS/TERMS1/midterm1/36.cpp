#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[m];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        if(i % 2 == 0)
        {
            for (size_t j = 0; j < m; j++)
            {
                b[j] = a[i][j];
            }
            sort(b, b + m);
            for (size_t i1 = 0; i1 < m; i1++)
            {
                a[i][i1] = b[i1];
            }
        }else{
            for (size_t j = 0; j < m; j++)
            {
                b[j] = a[i][j];
            }
            sort(b, b + m);
            reverse(b, b + m);
            for (size_t i1 = 0; i1 < m; i1++)
            {
                a[i][i1] = b[i1];
            }
        }
    }
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}