#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m){

    int res =-1;

    for(int col=0;col<m;col++){
        for(int row=0;row<n;row++){
            if(arr[row][col]==1) return row;
        }
    }

    return res;
}

int main()
{
    vector<vector<int> > a{ {0, 1, 1, 1},
                            {0, 0, 1, 1},
                            {1, 1, 1, 1},
                            {0, 0, 0, 0}};
        
        
        cout<<"Row With Max 1s = "<<rowWithMax1s(a, 4, 4);
    
    return 0;
}