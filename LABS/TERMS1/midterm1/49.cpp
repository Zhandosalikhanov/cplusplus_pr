#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    string log = "@gmail.com";
    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        if(s.find("@gmail.com") != - 1)
        {
            t += s + ' ';
        }
    }
    for (size_t i = 0; i < t.size(); i++)
    {
        if(t[i] == '@') i += 10;

        if(t[i] != ' ')
        {
            cout << t[i];
        }else{
            cout << endl;
        }
    }
}
