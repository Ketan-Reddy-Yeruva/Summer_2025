#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a; int b; int c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (max({a+b,b+c,c+a}) >= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}