#include<bits/stdc++.h>
using namespace std;

//// Some issue with the logic, should modify it
////
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; int k;
        cin >> n;
        cin >> k;

        string dummy; string s;
        getline(cin, dummy);
        getline(cin, s);

        vector<int> data(n);
        int count_zero = 0;
        int count_one = 0;
        for (int i=0; i<n; i++) {
            data[i] = s[i]-'0';
            if (data[i]==0)
                count_zero++;
            else
                count_one++;
        }
        int a = count_zero/2;
        int b = count_one/2;

        if (a+b < k)
            cout << "NO" << endl;
        if (a+b == k)
            cout << "YES" << endl;
        if (a+b > k) {
            if ( min(a,b) >= (n/2)-k )
                cout << "YES" << endl;
            else    
                cout << "NO" << endl;
        }


        ///// a-x = b-y = (n/2)-k;
        ///// x + y = k;
    }
}