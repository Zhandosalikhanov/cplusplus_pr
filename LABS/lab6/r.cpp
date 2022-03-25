#include <iostream>

using namespace std;

void capital(string s)
{
    for (int i = 0; i < 1; i++)
    {
        if (int(s[i])>=97 && int(s[i])<=122)
        {
            s[i]=char(int (s[i]-32));
        }
        cout<<s[i];
    }
}

int main()
{
    string s;
    cin >> s;
    capital(s);
    return 0;
}