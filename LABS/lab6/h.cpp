#include <bits/stdc++.h>

using namespace std;

// void valid(string n)
// {
//      int cnt = 0;
//      for (int i = 0; i < n.size(); i++)
//      {
//          if (n[i] % 2 == 0)
//          {
//              cnt++;
//          }
//      }
//      if (cnt == n.size())
//      {
//          cout << "Valid";
//      }
//      else
//      {
//          cout << "Not valid";
//      }
// }

string sum(int n)
{

    if(n%2!=0)
    {
        return "Not valid";
    }
    return sum(n/10);
    
}

int main()
{
    int n;
    cin >> n;
    cout<<sum(n);
    return 0;
}
