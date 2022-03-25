//palindrome

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string sold=s;
    reverse(s.begin(),s.end());
    
    if(sold == s )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}