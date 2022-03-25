#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int b[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i < l; i++)
    {
        cout << b[i] << " ";
    }
    for(int i = r; i >= l; i--)
    {
        cout<<b[i]<<" ";
    }
    for(int i = r+1; i <= n; i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}