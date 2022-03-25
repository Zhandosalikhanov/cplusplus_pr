#include <bits/stdc++.h>
using namespace std;

int buffer(char a, char b)
{
    return int(a - 48) * 10 + int(b - 48);
}
bool per_sq_check(int n)
{
    if((int)sqrt(n) * (int)sqrt(n) == n)
    return true;

    return false;
}

int main()
{
    string s;
    cin >> s;
    stack <char> st;

    // 161496

    for (int i = 0; i < s.size(); i++)
    {
        if(per_sq_check(buffer(s[i], s[i + 1]))) i++;
        else if(!per_sq_check(buffer(st.top(), s[i])) || st.empty())
            st.push(s[i]);
        else st.pop();
    }    

    if(st.empty())
    cout << "Stack is empty";
    else
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    
}