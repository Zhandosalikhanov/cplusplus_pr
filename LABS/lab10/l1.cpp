#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int size  = (n * (n + 1)) / 2;
    vector<int> v(size);
    int x = 0, y = 1;

    for (size_t i = 1, j = 2; i <= n; i++, j++)
    {
        fill(v.begin() + x, v.begin() + y, i);
        x += i;
        y += j;
    }
    
    
   
   for (size_t i = 0; i < size; i++)
        cout << v[i] << " ";
   
   //1 2 2 3 3 3 4 4 4 4 5 5 5 5 5
   //0, 1, 3, 6, 10, 15 ...
   //1, 3, 6, 10, 15 ...
}