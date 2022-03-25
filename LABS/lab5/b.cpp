#include<bits/stdc++.h>

using namespace std;

int main ()
{
    char q=65,w=90,e=97,r=122,d=32;
    string s;
    cin >>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=q && s[i]<=w)
        {
            cout<<s[i];
        }
        else 
        {
            s[i]-=d;
           cout<<s[i];
        }
    }
    return 0;
}