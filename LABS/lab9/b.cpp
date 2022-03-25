#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}

int main()
{
   int n;
   cin >> n;
   vector<int> v, v1;
   int x;
   for (size_t i = 0; i < n; i++)
   {
       cin >> x;
       if(x % 2 == 0)
       {
           v.push_back(x);
       }else{
           v1.push_back(x);
       }
   }
   sort(v.rbegin(), v.rend());
   sort(v1.begin(), v1.end());
   print(v);
   print(v1);
   
}