#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string dummy;
    getline(cin,dummy);
    while(t--) {
        int n;
        cin >> n;
        string dummy2;
        getline(cin,dummy2);
        string s;
        getline(cin,s);
        int z = s.size();
        int count_one = 0;
        for (int i=0; i<z; i++) {
            if (s[i] == '1') {
                count_one++;
            }
        }
        int count_zero = z-count_one;
        int ans = (count_zero*(count_one+1))+(count_one*(count_one-1));
        cout << ans << endl;
    }

}