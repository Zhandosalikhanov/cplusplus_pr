#include <bits/stdc++.h>
using namespace std;

string s;

string f(int n)
{
    if(n == 0)
    {
        reverse(s.begin(), s.end());
        return s;
    }
    s.push_back(char((n % 2) + 48));
    return f(n / 2);
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);

}