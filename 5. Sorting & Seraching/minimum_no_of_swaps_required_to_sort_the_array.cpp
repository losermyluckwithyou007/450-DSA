#include<bits/stdc++.h>
using namespace std;

int minSwaps(int *nums, int n) {

    vector<pair<int,int> > v(n);
    
    for(int i=0;i<n;i++){
        v[i] = { nums[i],i };
    }
    sort(v.begin(), v.end());
    int c = 0;
    for(int i=0;i<n;i++){
        if(v[i].second == i) continue;
        else {
            c++;
            swap(v[i], v[v[i].second]);
            i++;
        }
    }

    return c;

}

int main() {
    
    int nums[] = {10, 19, 6, 3, 5};
    int n = sizeof(nums)/sizeof(nums[0]);

    cout<<"Min Swaps : "<<minSwaps(nums, n);

    return 0;
}