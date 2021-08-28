#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr, int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void findFourElements(vector<int> arr, int n, int x){

    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    map<vector<int>, int>mp;

    int i=0, j=n-1;

    while(i<j){

        j=i+1;

        while(j<n){

            int left=j+1, right=n-1;

            while(left<right){

                int sum = arr[i] + arr[j] + arr[left] + arr[right];

                if(sum==x){
                    vector<int> cur {arr[i], arr[j], arr[left], arr[right]};
                    if(mp[cur]==0){
                        ans.push_back(cur);
                        mp[cur]=1;
                    }
                    left++; right++;
                }

                else if(sum>x) right--;
                else left++; 

            }
            j++;
        }
        i++;
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;

}

int main(){

    vector<int> arr {10, 20, 30, 40, 1, 2};
    int n = arr.size();
    int x=91;

    printArray(arr, n);
    cout<<endl;
    findFourElements(arr, n, x);

    return 0;
}