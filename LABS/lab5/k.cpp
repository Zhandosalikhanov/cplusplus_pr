#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    string s;
    cin >> s;
    // for (int j = 0; j < s.size(); j++)
    // {
    //     if ((s[j] == char(97)) || (s[j] == char(101) )||( s[j] == char(105)) || (s[j] == char(111)) || (s[j] == char(117)))
    //     {
    //         cnt++;
    //     }
    // }

    // cout << cnt;

    string beka="aeoiu";
    for (size_t i = 0; i < s.size(); i++)
    {
        if(beka.find(s[i])>= 0 && beka.find(s[i]) <= 5)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}