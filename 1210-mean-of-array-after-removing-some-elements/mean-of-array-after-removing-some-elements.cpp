class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int x = arr.size()*0.05;
        long long sum = 0;
        for(int i = x; i<arr.size()-x;i++){
            sum+=arr[i];
        }
        int total = (arr.size()-(2*x));
        double ans = (sum*1.0)/total;
        return ans;
    }
};