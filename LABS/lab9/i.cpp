#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    vector<string> v;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    
    set<string> s1;
    for (size_t i = 0; i < n; i++)
    {
        pair< set<string> :: iterator, bool> ans;
        ans = s1.insert(v[i]);
        if(ans.second == true) cout << "new user added" << endl;
        else cout << "user already exists" << endl;
    }
    
}