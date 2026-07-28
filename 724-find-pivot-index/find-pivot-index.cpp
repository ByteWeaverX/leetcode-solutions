class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0 ;
        int sum = 0;
        while(n>0){
             sum += nums[n-1];
             n--;
        }
        if(sum-nums[0]==0){
            return 0;
        } 
        for(int i = 1 ; i<nums.size() ; i++){
            left+=nums[i-1];
            int right = sum - nums[i] - left;
            if(left == right){
                return i;
            }
            
        }
        return -1;
    }
};