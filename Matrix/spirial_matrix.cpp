#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int> >& matrix)
{
    int dir=0;
    int top,down,left,right;
    int i;
        
        top=0;
        down=matrix.size()-1;
        left=0;
        right=matrix[0].size()-1;
        
        vector<int>v;
        
        while(top <= down && left <= right){
            
            if(dir==0){
                
                for(i=left;i<=right;i++){
                    
                    v.push_back(matrix[top][i]);
                    
                }
                
                top++;
                
            } else if (dir==1){
                
                for(i=top;i<=down;i++){
                    
                    v.push_back(matrix[i][right]);
                    
                }
                
                right--;
                
            } else if (dir==2){
                
                for(i=right;i>=left;i--){
                    
                    v.push_back(matrix[down][i]);
                    
                }
                
                down--;
                
            } else if (dir==3){
                
                for(i=down;i>=top;i--){
                    
                    v.push_back(matrix[i][left]);
                    
                }
                
                left++;
                
            }
            
            dir = (dir+1)%4;
            
        }
        
        return v;
        
}

// Driver code
int main()
{
    vector<vector<int> > a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };

    for (int x : spiralOrder(a)) {
        cout << x << " ";
    }
    return 0;
}