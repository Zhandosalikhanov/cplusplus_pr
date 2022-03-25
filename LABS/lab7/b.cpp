#include <bits/stdc++.h>

using namespace std;

unsigned long long bin(unsigned long long n)
{
   if(n == 0)
   return 0;

   if(n % 2 == 0)
   {
       return 10 * bin(n / 2);
   }else{
       return 10 * bin(n / 2) + 1;
   }

}

int main()
{
    unsigned long long n;
    cin >> n;
    cout << bin(n);
}