#include <bits/stdc++.h>
using namespace std;

void bin(int n)
{
    string s;
    while (n != 0)
    {
        s.push_back(int((n % 2) + 48));
        n /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main()
{
   int n;
   cin >> n;
   vector<int> v;
   int x;

   for (size_t i = 0; i < n; i++)
   {
       cin >> x;
       v.push_back(x);
   }
   for_each(v.begin(), v.end(), bin);
}