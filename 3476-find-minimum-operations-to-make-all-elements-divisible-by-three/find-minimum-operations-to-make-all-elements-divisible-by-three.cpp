class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;

        for(int x : nums) {
            int r = x % 3;
            if(r != 0) {
                operations += min(r, 3 - r);
            }
        }
        
        return operations;
    }
};
