#include <iostream>

using namespace std;

string count_of_neighbout_digit (string s,int n){
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0'&& s[i]<='9'){
            for(int j=0; j<n; j++){
                if(s[i+j]<'0'|| s[i+j]>'9'){
                    k=1;
                }
            }
            if(k==0){
                return "Valid";
            }
        }
        k=0;
    }
    return "Not valid";
}

int main()
{
    int a;
    string s;
    cin >> s;
    cin >> a;
    cout << count_of_neighbout_digit(s,a) << endl;
}