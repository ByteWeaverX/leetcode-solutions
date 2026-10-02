class Solution {
private:
void solve(int open, int close, string current, int n, vector<string> &ans){
    if(current.size()>=2*n){
        ans.push_back(current);
        return;
    }
    if(open<n){
        current+="(";
        solve(open+1, close, current, n, ans);
        current.pop_back();
    }
    if(close<open){
        current+=")";
        solve(open, close+1, current, n, ans);
        current.pop_back();
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current = "";
        int open=0;
        int close=0;
        solve(open, close, current, n, ans);
        return ans;
    }
};