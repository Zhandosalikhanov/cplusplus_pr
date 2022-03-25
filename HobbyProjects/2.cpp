#include <bits/stdc++.h>
using namespace std;

int size(int n)
{
    if(n == 0)
    return 0;

    return 1 + size(n / 10);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    bool stopper = true;
    for (size_t i = 0; i < n; i++)
        cin >> a[i];

    for (size_t i = 0; i < n; i++)
    {
        int x = 0, x1, index = 0;
        while (stopper)
        {
            x++;
            x1 = x;
            while (x1 != 0)
            {
                index++;
                if(index == a[i])
                {
                    cout << x1 / pow(10, size(x1) - 1) << endl;
                    stopper = false;
                    break;
                }
                x1 = x1 % (int)pow(10, size(x1) - 1);
            }
        }
    }

}