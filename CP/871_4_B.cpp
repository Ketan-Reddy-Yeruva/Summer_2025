#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> data(n);
        for (int i=0; i<n; i++) {
            cin >> data[i];
        }
        int ans = 0;
        int temp = 0;
        for (int i=0; i<n; i++) {
            if (data[i]==0) {
                temp++;
            }
            if(temp>ans) {
                ans = temp;
            }
            if (data[i]!=0) {
                if(temp>ans) {
                    ans = temp;
                }
                temp = 0;
            }
        }
        cout << ans << endl;
    }
}