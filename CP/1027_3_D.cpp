#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> x(n);
        vector<int> y(n);
        for (int i=0; i<n; i++) {
            cin >> x[i];
            cin >> y[i];
        }
        
        // n is a part of the area of the required big rectangle
        // to find least pssible area of the big rectangle
        // WE CAN MOVE ONLY ONE MONSTER!!!!
        // area will be (max(x_i) - min(x_i) + 1)*(max(y_i) - min(y_i) + 1)
        // basically we have to track second_min, second_max and no. of mins, no. of maxs
        // if more than one min and more than one max => do ntng
        // if both are one, then check differences
        // be careful since x and y are linked
        // so you have to compare different possibilities and come with the best
        //
        // 
        //  //

        int x_min_index = 0; int x_count_min = 1; int x_min2_index = 0; //(2nd min)
        int x_max_index = 0; int x_count_max = 1; int x_max2_index = 0; //(2nd max)
        for (int i=1; i<n; i++) {

            if (x[i]<x[x_min_index]) {
                x_count_min = 1;
                x_min2_index = x_min_index;
                x_min_index = i;
            }
            if (x[i]==x[x_min_index]) {
                x_count_min++;
            }

            if (x[i]>x[x_max_index]) {
                x_count_max = 1;
                x_max2_index = x_max_index;
                x_max_index = i;
            }
            if (x[i]==x[x_max_index]) {
                x_count_max++;
            }

        }

        if (x_count_min>1) {
            if (x_count_max==1) {
                // reqd_ans = x[x_max2_index] - x[x_min_index] + 1;
                // but we also have to check for y coordinates.
            }
        }


        if (x_count_min == 1 && x_count_max==1) {
            if (y_count_min == 1 && y_count_min ==1) {
                min()
            }
        }
    }
}