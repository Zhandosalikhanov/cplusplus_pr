#include <iostream>

using namespace std;

int main()
{
  int cnt = 0;
  char b = 48;
  string s;
  cin >> s;
  int a[10];

  for (size_t i = 0; i < 10; i++)
  {
    for (size_t j = 0; j < s.size(); j++)
    {
      if (b == s[j])
      {
        cnt++;
      }
    }
    a[i] = cnt;
    cnt = 0;
    b++;
  }
  string ans;
  int b1[10], i1 = 0;
  for (size_t i = 0; i < 10; i++)
  {
    if (a[i] != 0)
    {
      b1[i1] = a[i];
      i1++;
    }
  }
  for (size_t i = 0; i < i1 - 1; i++)
  {
    if (b1[i] == b1[i + 1])
    {
      ans = "YES";
    }
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << ans << endl;

  return 0;
}