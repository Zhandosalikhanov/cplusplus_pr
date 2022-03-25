#include <bits/stdc++.h>
using namespace std;

int main()
{
    float odd = 0, ev = 0;
    int x;
    while (true)
    {
        cin >> x;
        if(x < 0)
        break;

        if(x % 2 == 0)
        {
            ev++;
        }else{
            odd++;
        }
    }
    
    float ev_pr = (100 * ev) / (ev + odd);
    float odd_pr = (100 * odd) / (ev + odd);
    
    int ev_pr1 = (100 * ev) / (ev + odd);

    if(ev_pr1 - ev_pr != 0)
    {
        printf("%2.5f", ev_pr);
        printf(" %2.5f", odd_pr);
    }else{
        cout << ev_pr << " " << odd_pr;
    }
    
}