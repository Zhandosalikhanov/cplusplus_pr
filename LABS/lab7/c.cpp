#include <bits/stdc++.h>

using namespace std;

string binary(int n, int a[], int x)
{
    if(n == -1)
    {
        return "No";
    }
    if(x == a[n - 1])
    {
        return "Yes";
    }else{
        return binary(n - 1, a, x);
    }
}
string ent(int n)
{   
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    return binary(n, a, x); 
    
}
int main()
{
    int n;
    cin >> n;
    cout << ent(n);
    
    
}