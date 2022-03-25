#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        while (num > 9)
        {
            if (num % 10 == 0)
            {
                cnt++;
            }
            num /= 10;
        }
    }
    cout << cnt;
    return 0;
}