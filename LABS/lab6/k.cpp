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
    cout << Amanzhol(n, a) << endl;

    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// int beka(int n, int x)
// {
//     if(x == 0)
//     return 1;

//     return n * beka(n, x - 1);
// }

// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     cout << beka(n, x) << endl;
//     return 0;
// }
