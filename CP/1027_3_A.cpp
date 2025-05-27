#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string dummy;
    getline(cin, dummy);
    while(t--) {
        string s;
        getline(cin, s);
        int n = 0;
        for (int i=0; i<4; i++) {
            n = n + (s[i]-'0')*(pow(10,3-i));
        }
        int z = sqrt(n);
        if (z*z == n)
            cout << 0 << " " << sqrt(n) << endl;
        else
            cout << -1 << endl;
    }
}