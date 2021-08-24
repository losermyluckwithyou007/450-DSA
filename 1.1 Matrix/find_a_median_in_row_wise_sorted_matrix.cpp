#include <bits/stdc++.h>
using namespace std;

int searchElement(vector<vector<int>> &matrix, int r, int c){

    int k=0;
    int arr[r*c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[k++] = matrix[i][j];
        }
    }
    sort(arr, arr+(r*c));

    return arr[(r*c)/2];
}

int main()
{
    vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
        
        int target =10;
        
        cout<<" Middle Elment = "<<searchElement(a, 4, 4);
    
    return 0;
}