#include <bits/stdc++.h>
using namespace std;

string bin(int a);
int dec(string s);

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string ans;
    int a1 = a, b1 = b;
    string s = bin(a);
    string t = bin(b);
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    // char x = s[n - 1];
    // s[n - 1] = t[n - 1];
    // t[n - 1] = x;
    // if(a < b && dec(s) > dec(t))
    // {
    //     cout << "Good deal for the first number";
    // }else if(a > b && dec(s) < dec(t))
    // {
    //     cout << "Good deal for the second number";
    // }else if(dec(s) == dec(t))
    // {
    //     cout << "Nothing has changed";
    // }
}

int dec(string s)
{
    int sum = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        sum += (int(s[i]) - 48) * pow(2, s.size() - i - 1);
    }
    return sum;
}

string bin(int a)
{
    if(a == 1)
    {
        return "1";
    }
    if(a % 2 == 0)
    {
        return "0" + bin(a / 2);
    }else{
        return "1" + bin(a / 2);
    }
}