#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sum=0,som=0,a;
    string s;
    cin>>s;
    if(s.size()%2==0)
    {
        a=s.size()%2;
    }
    else
    {
        a=s.size()%2+1;
    }
    for(int i=0;i<a;i+=2)
    {
       sum+=s[i];
    }
    for(int i=1;i<a;i+=2)
    {
       sum+=s[i];
    }
    if(sum==som)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}