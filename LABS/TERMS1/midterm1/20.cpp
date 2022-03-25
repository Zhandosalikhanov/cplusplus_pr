#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (size_t i = 1; i < s.size(); i++)
    {
        sum += int(s[i] - 48);
    }
    if(int(s[0] - 48) == sum % 10)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
}