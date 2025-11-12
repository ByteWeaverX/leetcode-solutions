class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ones = count(nums.begin(),nums.end(),1);
        int n = nums.size();
        if(ones>0){
            return n-ones;
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int g = nums[i];
            for (int j = i + 1; j < n; ++j) {
                g = gcd(g, nums[j]);
                if (g == 1) {
                    ans = min(ans, j - i + 1);
                    break;
                }
            }
        }
        if(ans==INT_MAX) return -1;
        return (ans-1)+(n-1);
    }
};