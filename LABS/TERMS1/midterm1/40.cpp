#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if(x < 0 || x > 7 || y < 0 || y > 7)
    {
        cout << "Impossible";
        return 0;
    }
    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            if(i == x && j == y)
            {
                cout << "1 ";
            }
            else if(i == x || j == y || x - i == y - j || j == x + y - i)
            {
                cout << "2 ";
            }else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    
}