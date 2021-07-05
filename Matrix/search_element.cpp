#include <bits/stdc++.h>
using namespace std;

bool searchElement(vector<vector<int>> &matrix, int target){


        if(!matrix.size()) return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int low = 0;
        int high = (m * n) - 1;
        
        
        while(low <= high){
            
            int mid = (low + (high - low) / 2 );

            if(matrix[mid/m][mid%m] == target){
                
                return true;
                
            }
            if(matrix[ mid / m ][ mid % m ] > target){
                high = mid-1;
                
            } else {
                low = mid+1;
            }
            
        }
        
        return false;

}

int main()
{
    vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
        
        int target =10;
        
        cout<<searchElement(a, target);
    
    return 0;
}