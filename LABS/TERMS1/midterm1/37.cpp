#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size() + 2; i++)
    {
        cout << "+";
    }
    cout << endl << "+" << s << "+" << endl;
    for (size_t i = 0; i < s.size() + 2; i++)
    {
        cout << "+";
    }
}