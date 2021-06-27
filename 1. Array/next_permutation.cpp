class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1) return;
        
        int i=1;
        int lastInc = -1;
        
        //find the last peak of the ASC order
        while(i<n){            
            if(nums[i] > nums[i-1]){
                lastInc = i;
            }          
            i++;          
        }
        
        //check array is DSC
        if(lastInc==-1){
            for(int i=0;i<n/2;++i)
                swap(nums[i], nums[n-i-1]);
            return;
        }
        
        //find the element in range (numa[lastInc-1] to nums[lastInc]) to the right
        int index = lastInc;
        
        for(i=lastInc;i<n;++i){
            if(nums[i] > nums[lastInc-1] and nums[i]<nums[lastInc]){
                index=i;
            }
        }
        swap(nums[lastInc-1], nums[index]);
        sort(nums.begin()+lastInc, nums.end());
        
    }
};
 