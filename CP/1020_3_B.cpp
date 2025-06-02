#include<bits/stdc++.h>
using namespace std;

void swap(int *ptra, int *ptrb) {
    *ptra = *ptra + *ptrb;
    *ptrb = *ptra - *ptrb;
    *ptra = *ptra - *ptrb;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; int x;
        cin >> n; cin >> x;
        vector<int> ans(n);

        for (int i=0; i<n; i++) {
            ans[i]=i;
        }

        if (x<n-1) {
            swap(&ans[x], &ans[n-1]);
        }
        for (int i=0; i<n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }   
}