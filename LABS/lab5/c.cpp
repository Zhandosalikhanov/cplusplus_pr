//subspace

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=-1;
    string s, t;
    cin >> s >> t;
    a=s.find(t);
    cout<<a;
    if(a>=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}