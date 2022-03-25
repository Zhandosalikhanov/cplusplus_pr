#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "MONTUEWEDTHUFRISATSUN";
    string t;
    cin >> t;
    if(s.find(t) == 18)
    {
        cout << 7;
    }else{
        cout << 6 - s.find(t) / 3;
    }
}