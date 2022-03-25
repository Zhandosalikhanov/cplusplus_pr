#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    while (n != 0)
    {   
        if(n % 16 < 10)
        {
            s.push_back(int((n % 16) + 48));
        }else{
            s.push_back(char((n % 16) + 55));
        }
        n /= 16;
    }
    reverse(s.begin(), s.end());
    cout << s;
}