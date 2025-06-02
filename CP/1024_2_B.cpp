#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll myfunc(ll z) {
    if (z>=0)
        return z;
    else
        return ((-1)*z);
}

ll median_func(ll y) {
    if(y%2==0)
        return y/2;
    else    
        return ((y+1)/2);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> data(n);
        for (ll i=0; i<n; i++) {
            cin >> data[i];
        }
        ll val = data[0];
        ll count = 0;
        for (ll i=1; i<n; i++) {
            if (myfunc(data[i]) < myfunc(val))
                count++;;
        }
        // if  ( count < median_func(n) ) 
        // //|| (n-1-count < median_func(n)))
        //     cout << "YES" << endl;
        // else if (count == n-1)  
        //     cout << "NO" << endl;

        // forget first element
        // sort the array
        // check if val or -val can be the median

    if ((count<median_func(n)) || (count == n-median_func(n)))
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;

    }
}