class Solution {
public:
    int gcd(int a, int b){
        while(a!=0){
            int rem = b%a;
            b = a;
            a = rem;
        }
        return b;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size()-1;
        return gcd(nums[0], nums[n]);
    }
};