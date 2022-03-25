#include <bits/stdc++.h>
using namespace std;

int main()
{  
    string s;
    cin >> s;
    stack<char> st;

    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == '(') st.push('(');

        if(s[i] == ')' && st.top() == '(')
        {
            st.pop();
        }else{
            cout << "NO";
            return 0;
        }
    }
    if(st.empty())
        cout << "YES";
    else
        cout << "NO";
}