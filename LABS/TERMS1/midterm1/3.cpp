#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "00000000";
    for (size_t i = 7; n != 0; i--)
    {
        s[i] = char((n % 2) + 48);
        n /= 2;
    }
    string t = s;
    reverse(s.begin(), s.end());
    if(s == t)
    {
        cout << "It works!";
    }else{
        cout << "Sad";
    }
}