#include<bits/stdc++.h>
using namespace std;

int getMedian(int arr1[], int arr2[], int n, int m){

    vector<int>v;
    int i=0;
    int j=0;
    while(i<n && j<m){

        if(arr1[i]<arr2[j]){
            v.push_back(arr1[i]);
            i++;
        } 
        
        else {
            v.push_back(arr2[j]); 
            j++;
        }
    }
    
    for(;i<n;i++) v.push_back(arr1[i]);
    for(;j<m;j++) v.push_back(arr2[j]);

    // sort( v.begin(), v.end() );

    if(v.size()%2==0){
        int avg = ( v[(v.size()/2)] + v[(v.size()/2)-1] ) / 2;

        return avg;
    }
    else return v[v.size()/2];
    
}

int main(){

    int ar1[] = {2, 3, 5, 8};
    int ar2[] = {10, 12, 14, 16, 18, 20};

    int n = sizeof(ar1)/sizeof(ar1[0]);
    int m = sizeof(ar2)/sizeof(ar2[0]);

    cout<<"Median of diff sizes arrays = "<<getMedian(ar1, ar2, n, m);

    return 0;
}