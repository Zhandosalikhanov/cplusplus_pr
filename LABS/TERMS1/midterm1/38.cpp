#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(j == n - 1 -  i)
            {
                cout << 1 << " ";
            }else if(j > n - 1 -  i)
            {
                cout << 2 << " ";
            }else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    
}