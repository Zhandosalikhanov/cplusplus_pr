#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        string s1 = s;
        reverse(s.begin(), s.end());
        if(s == s1)
        {
            t += s + ' ';
        }
    }
    for (size_t i = 0; i < t.size(); i++)
    {
        if(t[i] != ' ')
        {
            cout << t[i];
        }else{
            cout << endl;
        }
    }
    if(t.size() == 0)
    {
        cout << "NO";
    }

}
