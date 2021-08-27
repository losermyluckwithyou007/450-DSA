#include <bits/stdc++.h>
using namespace std;

int firstLastOcc(int arr[], int n, int x, int flag){

    int start = 0;
    int last = n-1;
    int res = -1;

    while(start<=last){

        int mid = (start + last)/2;

        if(arr[mid]==x && flag==1){
            res=mid;
            last=mid - 1;

        }else if(arr[mid]==x && flag==-1){
            res=mid;
            start=mid+1;
        }
        else if (arr[mid]<x) {
            start = mid + 1;
        }else  {
            last = mid - 1;
        }
    }

    return res;
}

void find(int arr[],int n, int x){

    cout<<firstLastOcc(arr, n, x, 1)<<" "<<firstLastOcc(arr, n, x, -1);

}

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    cout<<endl;    

}

int main(){

    int arr[] =  { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
        
        int n=9, x=5;
        
        printArray(arr, n);
        
        cout<<"First and Last Occurrences = ";
        find(arr,n,x);
    
    return 0;
}