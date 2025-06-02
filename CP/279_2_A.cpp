#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> data(t);
    set<int> myset1;
    set<int> myset2;
    set<int> myset3;
    for (int i=0; i<t; i++) {
        cin >> data[i];
        switch(data[i]) {
            case 1:
                myset1.insert(i+1);
                break;
            case 2:
                myset2.insert(i+1);
                break;
            case 3:
                myset3.insert(i+1);
                break;
        }
    }
    int z = min({myset1.size(), myset2.size(), myset3.size()});

    cout << z << endl;
    for (int i=0; i<z; i++) {
        cout << *myset1.begin() << " " << *myset2.begin() << " " << *myset3.begin() << endl;
        myset1.erase(myset1.begin());
        myset2.erase(myset2.begin());
        myset3.erase(myset3.begin());
    }    
}