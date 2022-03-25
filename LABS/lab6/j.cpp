#include <bits/stdc++.h>

using namespace std;

void Amanzhol(int n)
{

    int a[n],maxi=-100000;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    cout<<maxi;


}

int main()
{
    Amanzhol(4);

    return 0;
}