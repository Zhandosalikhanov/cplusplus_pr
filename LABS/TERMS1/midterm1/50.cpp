#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);
    s.push_back(' ');
    string t;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            s1.push_back(s[i]);
        }else{
            if(s1.size() >= 3)
            {
                t += s1 + ' ';
                s1.clear();
            }else{
                s1.clear();
            }
        }
    }
    for (size_t i = 0; i < t.size() - 1; i++)
    {
        cout << t[i];
    }
    
    
}
