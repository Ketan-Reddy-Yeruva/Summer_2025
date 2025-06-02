#include<bits/stdc++.h>
using namespace std;

int myfunc(vector<int> data, int n) {
    int curr = data[0];int ans = 1;
    for (int i=0; i<n; i++) {
        if (data[i]>curr+1) {
            ans++;
            curr = data[i];
        }
    }
    return ans;
}

/// basically ig there is no use of repeated elements.
/// so yeah maintaining a set is enough.
/// basically like recurrence or dp???
/// take max of f(i-1),f(i-2) and add 1 to get f(i)???
/// f(1) = 1;
/// f(2) = {
///     if (a1>a0+1), then 2
///     else 1
///}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> data(n);
        vector<int> dataset;
        for (int i=0; i<n; i++) {
            cin >> data[i];
        }

        for (int j=0; j<n; j++) {
            if (j>0) {
                if (data[j-1]<data[j]) {
                    dataset.push_back(data[j]);
                }
            }
            else
                dataset.push_back(data[j]);
        }
        int z = dataset.size();
        //cout << myfunc(data, n) << endl;
        // for (int k=0; k<z; k++) {
        //     cout << dataset[k] << " ";
        // }
        cout << myfunc(data,n) << endl;
    }
}