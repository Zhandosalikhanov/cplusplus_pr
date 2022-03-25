#include <iostream>
using namespace std;
int main()
{
    int n, e = 0, num = 1;
    cin >> n;
    int a[n][n];

    int q[2 * n - 1];
    q[0] = n - 1;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    for (int o = n - 1; o >= 1; o--)
    {

        for (int k = 1; k <= 2; k++)
            q[++e] = o;
    }
    e = 0;
    int i = 0, j = 0, z = 0;
    while (num <= n * n)
    {
        for (int w = 0; w < q[e]; w++)
        {
            a[i][j] = num;
            i = i + dx[z];
            j = j + dy[z];
            num++;
            if(num > n * n) break;
        }
        e++;
        z = (z + 1) % 4;
    }
    
    for (size_t y = 0; y < n; y++)
    {
        for (size_t h = 0; h < n; h++)
        {
            cout << a[y][h] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}