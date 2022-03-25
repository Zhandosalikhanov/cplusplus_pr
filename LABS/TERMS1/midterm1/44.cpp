#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n % 2 == 1)
    {
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if(j < n - 1 - i)
                {
                    cout << ".";
                }else{
                    cout << "#";
                }
            }
            cout << endl;
        }
        return 0;
    }
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(j > i)
            {
                cout << ".";
            }else{
                cout << "#";
            }
        }
        cout << endl;
    }
}