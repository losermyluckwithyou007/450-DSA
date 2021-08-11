#include<bits/stdc++.h>
using namespace std;

class solution{

    public:

    int trappingWater(int *arr, int n){

        int low = 0;
        int high = n-1;
        int leftMin = 0;
        int rightMax = 0;
        int res = 0;

        while(low<=high){

            if(arr[low]>=arr[high]){
                if(arr[low]>=leftMin) leftMin = arr[low];
                else res += leftMin-arr[low];
                low++; 
            }
            else {
                if(arr[high]>=rightMax) rightMax = arr[high];
                else res += rightMax - arr[high];
                high--;
            }
        }
        return res;
    }
};

int main(){

    int arr[] = {3,0,0,2,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    solution s;

    cout<<"Rain water = "<<s.trappingWater(arr, n);

    return 0;
}