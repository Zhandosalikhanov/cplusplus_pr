#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        cnt++;
    }
    for (size_t i = 0; i < cnt; i++)
    {
        cout << 1;
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] != '1')
        cout << s[i];
    }
    
    
}