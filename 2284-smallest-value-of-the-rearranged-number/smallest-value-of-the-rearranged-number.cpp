class Solution {
public:
    long long smallestNumber(long long num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        
        if(num>0){
            int i = 0;
            while(s[i]=='0'){
                i++;
            }
            swap(s[0],s[i]);
            long long ans = stoll(s);
            return ans;
        }
        else if(num<0){
            reverse(s.begin(),s.end());
            long long ans = stoll(s);
            ans = -ans;
            return ans;
        }
        return 0;
    }
};