#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    for (size_t i = 0; i < s.size(); i++)
    {
        if(int(s[i]) < 48 || int(s[i]) > 57)
        {
            cout << s[i];
        }

        if(s[i] == ' ')
        {
            cout << endl;
        }
    }
    
}
