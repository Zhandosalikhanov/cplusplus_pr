#include <bits/stdc++.h>

using namespace std;

void Amanzhol(string s)
{

    for (int i = 0; i < s.size(); i++)
    {
        
        if (i % 2 == 0 && int(s[i])>=97 && int(s[i])<=122)
        {
            s[i] = (char(int(s[i]) - 32));
        }
        cout << s[i];
    }
}

int main()
{
    string s;
    cin >> s;
    Amanzhol(s);

    return 0;
}