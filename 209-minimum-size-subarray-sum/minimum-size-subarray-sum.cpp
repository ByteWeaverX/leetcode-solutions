class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0 ; int totalsum = 0;
        int ans = INT_MAX;
        for(int x : nums){
            totalsum+=x;
        }
        if(totalsum<target) return 0;
        int i = 0 ;
        for(int j = 0 ; j < nums.size() ; j++){
            sum += nums[j];
            while(sum>=target){
                ans=min(ans, j-i+1);
                sum -=nums[i];
                i++;
            }
        }
        return ans;
    }
};