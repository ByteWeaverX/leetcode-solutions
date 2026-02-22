class Solution {
private:
void solve(vector<int>& candidates, vector<vector<int>>& ans, vector<int> output, int index, int target){
    if(index == candidates.size() || target<0) return;
    if(index>candidates.size() || target == 0){
        ans.push_back(output);
        return;
    }
    output.push_back(candidates[index]);
    solve(candidates, ans, output, index, target-candidates[index]);
    output.pop_back();
    solve(candidates, ans, output, index+1, target);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0 ; 
        solve(candidates, ans, output, index, target);
        return ans;
    }
};