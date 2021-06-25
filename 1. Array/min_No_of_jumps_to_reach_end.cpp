#include <iostream>
#include <algorithm>
using namespace std;

int No_of_jumps(int A[], int n){
    
    if (A[0] <= 0)
        return -1;
        
        int maxReach=A[0];
        int jumps=1;
        int steps=A[0];
        
        for(int i=1;i<n;i++){
            
            if(i==n-1) return jumps;
            
            maxReach = max(maxReach, i+A[i]);
            
            steps--;
            
            if(steps == 0 ){ jumps++;
            
            if(i >= maxReach) return -1;
            
            steps = maxReach - i;
            
            }
        }
    return -1;
}

int main(){

    int A[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int  n = sizeof(A)/sizeof(A[0]);

    cout<<No_of_jumps(A,n);

    return 0;
}