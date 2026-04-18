class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0 ;
        int org = n;
        while(n!=0){
            int digit = n % 10;
            rev = rev*10 + digit;
            n = n / 10;
        }
        int ans = abs(org-rev);
        return ans;
    }
};