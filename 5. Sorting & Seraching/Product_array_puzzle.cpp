#include<bits/stdc++.h>
using namespace std;

void productExceptSelf(int nums[], int n) {

    int *l = new int[sizeof(int) * n];
    int *r = new int[sizeof(int) * n];

    l[0]=1;
    r[n-1]=1;

    // int* prod = new int[sizeof(int) * n];

    for(int i=1;i<n;i++){
        l[i] = l[i-1] * nums[i-1];
    }
    for(int i=n-2;i>=0;i--){
        r[i] = r[i+1] * nums[i+1];
    }
    for(int i=0;i<n;i++){
        nums[i] = r[i] * l[i];
    }



    // for(int i=0;i<n;i++){
    //     prod[i] = l[i] * r[i];
        
    // }

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

}

int main() {

    int nums[] = {10, 3, 5, 6, 2};
    int n = 5;

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    cout<<"\nProduct Array Puzzle"<<endl;
    
    productExceptSelf(nums, n);

    return 0;
}