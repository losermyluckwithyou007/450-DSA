#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void threeWayPartitioning(int A[], int n, int a, int b){

        int l = 0;
        int r = n-1;

        for(int i=0;i<=r;i++){

            if(A[i]<a){
                swap(A[i], A[l]);
                l++;
            } 
            else if(A[i]>b){
                swap(A[i], A[r]);
                r--;
                i--;
            }

        }

    }
};

int main(){

    int A[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = sizeof(A)/sizeof(A[0]);
    
    Solution s;

    s.threeWayPartitioning(A, n, 20, 20);
    
    cout<<"Three way partitioning";

    cout << "Modified array \n";
    for (int i=0; i<n; i++)
        cout << A[i] << " ";

    return 0;
}