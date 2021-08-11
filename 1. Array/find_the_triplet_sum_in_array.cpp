#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    
    string find3Numbers(int A[], int n, int X){
        sort(A, A+n);
        
        int ans=0;
        
        for(int i=0;i<n-2;i++){
            
            int l=i+1;
            int r=n-1;
            
            while(l<r){
                
                if(A[i]+A[l]+A[r]==X){
                    ans=1; 
                    break;
                } 
                else if(A[i]+A[l]+A[r]<X) l++;
                
                else r--;   
            }
        }

        if(ans==1) return "Yes";
        else return "No";
    }
};

int main(){

    int arr[] = {1 ,2 ,4 ,3 ,6 };
    int n = sizeof(arr)/sizeof(arr[0]);

    Solution s;

    cout<<"find triplet sum in array = "<<s.find3Numbers(arr, n, 10);

    return 0;
}