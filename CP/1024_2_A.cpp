#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; int m; int p; int q;
        cin >> n >> m >> p >> q;
        //a1 + a2 + a3 + ... + an = m;                   (sum of all elements in arrary = m)
        //a_i + a_(i+1) + a_(i+2) + .. a_(i+p-1) = q     (sum of any p consecutive no.s = q)
        // 1 <= i <= (n-p+1)
        // totally at max, p distinct values
        // a_i = a_(i%p)
        // n = (kp) + r;
        // m = (kq) + (a1 + a2 + a3 + ... a_r)
        if (n%p == 0) {
            if (m%q==0) {
                if (n/p == m/q) {
                    cout << "YES" <<endl;
                }
                else
                    cout << "NO" << endl;
            }
            else    
                cout << "NO" << endl;
        }
        else    
            cout << "YES" << endl;
    }
}