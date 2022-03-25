#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cnt= 1, max = 0;
    char a;

    for (size_t i = 1; i < s.size() + 1; i++)
    {
        if(s[i] == s[i - 1])
        {
            cnt++;
        }else{
            if(cnt > max)
            {
                max = cnt;
                a = s[i - 1];
            }
            cnt = 1;
        }
    }
    cout << a << " " << max;
}
