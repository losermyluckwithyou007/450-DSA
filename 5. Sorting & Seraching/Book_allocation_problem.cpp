#include<bits/stdc++.h>
using namespace std;

    bool solve(int *A, int n, int mid, int m){
        int sum = 0;
        int stu = 1;
        for(int i=0;i<n;i++){
            if(A[i]>mid) return false;
            if(sum+A[i] > mid){
                stu++;
                sum = A[i];
                if(stu>m) return false;
            }
            else sum += A[i];
        }
        return true;
    }
    
    int findPages(int A[], int N, int M) 
    {
        int lb = 0;
        int s= 0 ;
        int ans = 0;
        
        for(int i=0;i<N;i++) s += A[i];
        
        int ub = s;
        
        while(lb<=ub){
            int mid = (lb+ub)/2;
            if(solve(A,N,mid,M)){
                ans = mid;
                ub = mid-1;
            }
            else {
                lb = mid+1;
            }
        }
        return ans;
    }

    int main(){

    int N = 4;
    int A[] = {12,34,67,90};
    int M = 2;

    cout<<" Allocate minimum number of pages = "<<findPages(A, N, M);

    return 0;
}