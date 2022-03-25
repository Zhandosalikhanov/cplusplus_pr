#include <bits/stdc++.h>
using namespace std;

int cnt, cnt1;
int n, c = 1;

int saken(int a, int b)
{
    cnt1 = 0;
    if(a + 1 < c && b - 2 < c) cnt1++;
    if(a - 1 < c && b - 2 < c) cnt1++;
    if(a - 2 < c && b + 1 < c) cnt1++;
    if(a - 2 < c && b - 1 < c) cnt1++;
    if(a + 2 < c && b + 1 < c) cnt1++;
    if(a + 2 < c && b - 1 < c) cnt1++;
    if(a + 1 < c && b + 2 < c) cnt1++;
    if(a - 1 < c && b + 2 < c) cnt1++;

    return cnt1;
}

void knight()
{
    cnt = 0;
    for (int i = 0; i < c; i++)
        for (int j = 0; j < c; j++)
            cnt += ((c * c) - saken(i, j) - 1);
        

    cout << cnt << endl;
    if(c != n)
    {
        c++;
        knight();
    }
}

int main()
{
    cin >> n;
    knight();
}
