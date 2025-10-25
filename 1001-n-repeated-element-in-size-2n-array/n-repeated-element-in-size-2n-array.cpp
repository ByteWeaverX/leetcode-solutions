class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int num;
        for(int num : nums){
            freq[num]++;
            if(freq[num]>1){
            return num;
           }
        }
       
        return 0;
    }
};