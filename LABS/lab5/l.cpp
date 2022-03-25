#include <bits/stdc++.h>

using namespace std;

int main()
{
    string beka;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        
         if (int(s[i]) >= int(s[i - 1]) || i == 0)
         {
             beka = "YES";
         }
         else
         {
             cout << "NO";
             return 0;
         }
        
    }

    cout << beka << endl;
    return 0;
}