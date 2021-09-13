#include<bits/stdc++.h>
using namespace std;

long long findSubarray(int arr[], int n){

    long long count=0,sum=0;
    map<long long, int>mp;

    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum!=0){
            count += mp[sum];
        }
        mp[sum]++;
    }

    long long zero = ((mp[0]) * (mp[0]+1))/2;

    return count + zero ;

}

int main() {

    int n = 6;
    int arr[] = {0,0,5,5,0,0};

    cout<<"Find Sub Array : "<<findSubarray(arr, n);

    return 0;
}
