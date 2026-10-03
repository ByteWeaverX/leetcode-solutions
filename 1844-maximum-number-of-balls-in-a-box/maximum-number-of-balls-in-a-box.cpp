class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> count(46, 0);
        int ans=0;
        for(int i = lowLimit ; i <= highLimit ; i++){
            int nums = i;
            int sum = 0 ;
            while(nums>0){
                sum += nums%10;
                nums/=10;
            }
            count[sum]++;
            ans= max(ans, count[sum]);
        }
        return ans ;
    }
};