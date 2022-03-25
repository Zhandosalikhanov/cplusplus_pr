#include <bits/stdc++.h>

using namespace std;

void ZHandos(string v)
{
    string s = "aeoiuAEIOU";
    for (int i = 0; i < v.size(); i++)
    {
        if ((s.find(v[i])) == -1)
        {
            cout << v[i];
        }
    }
    
    
}

int main()
{
    string v;
    getline(cin, v);
    ZHandos(v);
    return 0;
}