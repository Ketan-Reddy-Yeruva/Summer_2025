#include<bits/stdc++.h>
using namespace std;


/////////////
/////////// WRONG !!!!!
////////// MISUNDERSTOOD THE QUESTION


////////// SOLVE AGAIN!!!!!!!
int main() {
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i=0; i<n; i++) {
        cin >> data[i];
    }


    set<int> myset;
    for (int i=0; i<n; i++) {
        myset.insert(data[i]);
    }
    int ans = 0;


    map<int,int> mymap;
    for (int i=0; i<n; i++) {
        mymap[data[i]]++;
    }

    /// compare the netvalues of last second vs total of netvalues of last and last third elements
    /// then repeat the algorithm
    /// at every instant, we get the best max value??
    /// think
    int map_ans = 0;
    while(!mymap.empty()) {
        map_ans = 
    }


    while(!myset.empty()) {
        int max = *prev(myset.end());
        ans = ans + max;
        myset.erase(max);
        myset.erase(max-1);
    }
    cout << ans << endl;
    //// So, we need a set 
    //// Intial ans = 0;
    // repeat the following
    // select max element in set. add its value to the ans. Remove that element and its predecessor
    // repeat till set becomes empty.



}