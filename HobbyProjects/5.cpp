#include <bits/stdc++.h>
using namespace std;

string compress(string s) {
    string t;
    
    for (int i = 0; i < (int)s.size(); i++) {
        int j = i;
        while (s[i] == s[j]) {
            j++;
        }
        j--;

        string k = "";
        int rep = j - i + 1;
        while (rep) {
            int x = rep % 10;
            k += x + '0';
            rep /= 10;
        }
        reverse(k.begin(), k.end());

        t = t + k + s[i];
        i = j;
    }
    
    return t;
}

void solve() {

    string s;
    cin >> s;

    string t = compress(s);

    cout << s << '\n' << t;

}

int main() {

    solve();

    return 0;
}