#include <bits/stdc++.h>
using namespace std;

string f(int n, int k, string s, int i);

int main()
{
    int n, k, i = 0;
    cin >> n >> k;
    string s;
    s = f(n, k, s, i);
    reverse(s.begin(), s.end());
    cout << s;
}

string f(int n, int k, string s, int i)
{
    if(n == 0)
    {
        return s;
    }
    if(n % k < 10)
    {
        s.push_back(((n % k) + 48));
    }else{
        s.push_back(((n % k) + 55));
    }
    return f(n / k, k, s, ++i);
}



