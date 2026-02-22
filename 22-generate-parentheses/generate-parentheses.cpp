class Solution {
private:
void solve(int open, int close, int n, string current, vector<string>& ans){
    if(current.size()>=2*n){
        ans.push_back(current);
        return;
    }
    if(open<n){
        current.push_back('(');
        solve(open+1, close, n, current, ans);
        current.pop_back();
    }
    if(close<open){
        current.push_back(')');
        solve(open, close+1, n, current, ans);
        current.pop_back();
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current = "";
        int open = 0 ; int close = 0 ; 
        solve(open, close, n, current, ans);
        return ans;
    }
};