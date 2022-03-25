#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    char a;
    cin >> s >> t >> a;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(t.find(s[i]) != -1)
        {
            cout << a;
        }else{
            cout << s[i];
        }
    }
    
}
