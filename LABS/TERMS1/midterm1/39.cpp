#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int c[k][2];
    int cnt = 0;

    for (int i = 0; i < k; i++)
    cin >> c[i][0] >> c[i][1];

    char a[n][m];

    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        a[i][j] = '.';
    
    int i2, i3;
    for (int j = 0; j < k; j++)
    {
        i2 = c[j][0];
        i3 = c[j][1];
        a[i2][i3] = '*';
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int i1 = i - 1; i1 <= i + 1; i1++)
            {
                for (int j1 = j - 1; j1 <= j + 1; j1++)
                {
                    if(a[i1][j1] == '*' && (i1 >= 0 && i1 < n) && (j1 >= 0 && j1 < m))
                    cnt++;
                }
                
            }
            
            if(cnt != 0 && a[i][j] != '*')
            {
                cout << cnt << " ";
            }else{
                cout << a[i][j] << " ";
            }
            cnt = 0;
        }
        cout << endl;
    }
    
    
}