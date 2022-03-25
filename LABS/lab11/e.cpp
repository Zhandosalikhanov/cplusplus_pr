#include <bits/stdc++.h>
using namespace std;
typedef set<char> sc;

int main()
{
    int n;
    cin >> n;
    map<char, int> m;
    string s;
    sc st;

    for (size_t i = 0; i < n; i++)
    {
        cin >> s;

        for (size_t j = 0; j < s.size(); j++)
            st.insert(s[j]);

        for (sc :: iterator it = st.begin(); it != st.end(); it++)
            m[*it]++;

        st.clear();
    }

    bool a = false;
    map<char, int> :: iterator it = m.begin();
    for (; it != m.end(); it++)
    {
        if(it -> second == n)
        {
            cout << it -> first << " ";
            a = true;
        } 
    }
    
    if(!a)
    cout << "NO COMMON CHARACTERS";
}