#include <bits/stdc++.h>

using namespace std;

size_t power(size_t a)
{
    if(a == 0)
    {
        return 1;
    }
    
    return 10 * power(a - 1);
}

size_t Amanzhol(size_t n, size_t a)
{   
    if(a == 0)
    {
        return 0;
    }
    size_t sum=0;
    sum = n / power(a - 1);
    size_t b = n - sum * power(a - 1);

    return sum + Amanzhol(b, a-1);
}

int main()
{
    size_t n, a = sizeof(n);
    cin >> n;
    if(Amanzhol(n,a)%(n%10)==0)
    cout<<"Yes";
    else
    {
        cout<<"No";
    }
    return 0;
}