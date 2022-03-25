#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s.erase(0, 1);
    string s1 = s;
    reverse(s.begin(), s.end());
    if (s1 == s)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

//мынау ешек 
//     #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){

//     string s;
//     cin >> s;

//     string a = s;

//     reverse(s.begin(), s.end());

//     if(s == a || s.size() == 2){
//         cout << "YES";
//         return 0;
//     }
//     int j , ans = 0;
//     for( j = 1 ; j < s.size() ; j++){
//         if(s[j] != s[j-1]){
//             ans++ ;
//         }
//     }
//     if(ans == 1){
//         cout << "YES" ;
//     }else{
//         cout << "NO";
//     }
//     return 0;
// }