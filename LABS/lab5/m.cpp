#include <iostream>

using namespace std;

int main()
{
    string s;
    int n, cnt = 0;
    char b;
    cin >> s >> b >> n;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]== b)
        {
          cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
