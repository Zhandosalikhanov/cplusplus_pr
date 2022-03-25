#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if(n == 0 || m == 0)
    {
        cout << "error";
        return 0;
    }
    
    int x, max = INT_MIN, sum1 = 0;
    string s, maxi, total;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        total += s + " ";
        for (size_t j = 0; j < m; j++)
        {
            cin >> x;
            sum1 += x;
        }
        if(sum1 > max)
        {
            max = sum1;
            maxi = s;
        }
        a[i] = sum1;
        sum1 = 0;
    }
    for (size_t i = 0, j = 0; i < total.size(); i++)
    {
        if(total[i] != ' ')
        {
            cout << total[i];
        }else{
            cout << " - " << a[j] << endl;
            j++;
        }
    }
    cout << "The best:" << endl << maxi << " " << max;
    
}