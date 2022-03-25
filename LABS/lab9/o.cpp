#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1;
    cin >> n;
    map<string, string> m;
    map<string, int> m1;
    string s, t;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s >> t;
        m[s] = t;
        m1[s]++;
    }

    cin >> n1;
    for (size_t i = 0; i < n1; i++)
    {
        cin >> s >> t;
        if(m[s] == t)
        {
            cout << "correct password" << endl;
        }else if(m1[s] == 0)
        {
            cout << "login error" << endl;
        }else{
            cout << "password error" << endl;
        }
    }
    
}