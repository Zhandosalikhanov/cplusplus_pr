#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ev = 0, odd = 0, cnt = 0, ch = 0;

    for (size_t i = 97; i < 123; i++)
    {
        for (size_t j = 0; j < s.size(); j++)
        {
            if(int(s[j]) == i)
            cnt++;
        }
        if(cnt % 2 == 0)
        {
            ev++;
        }else{
            odd++;
        }
        if(s.find(char(i)) != -1)
        {
            ch++;
        }
        cnt = 0;    
    }
    
    if((odd == 0 || odd == 1) && (ev = ch || ev == ch - 1))
    {
        cout << "Luffy is the pirate king!";
    }else{
        cout << "Onepiece";
    }
    
}
