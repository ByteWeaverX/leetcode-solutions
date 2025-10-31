class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for (int n : nums) freq[n]++;
        for (auto &p : freq) {
            if (p.second == 2) ans.push_back(p.first);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};