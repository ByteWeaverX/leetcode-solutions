class Solution {
private:
void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& output, int index){
    
    ans.push_back(output);
        
    for(int i = index;i<nums.size();i++){
        if(i>index && nums[i]==nums[i-1]){
            continue;
        }
        output.push_back(nums[i]);
        solve(nums,ans,output,i+1);
        output.pop_back();
    }
    
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(nums.begin(),nums.end());
        int index = 0;
        solve(nums,ans,output,index);
        return ans;
    }
};