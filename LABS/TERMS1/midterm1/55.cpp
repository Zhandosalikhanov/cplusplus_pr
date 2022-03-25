#include<iostream>

using namespace std;

int main()
{
    int a[50];
    for(int i = 0;; i++)
    {
        cin>>a[i];
        if(cin.peek()=='\n')break;
    }
}