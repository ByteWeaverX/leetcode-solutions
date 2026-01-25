class Solution {
private:
void solve(int open, int close, string current, vector<string>& ans,int n){
    if(current.size()>=2*n){
        ans.push_back(current);
        return;
    }
    if(open<n){
        current.push_back('(');
        solve(open+1, close, current, ans, n);
        current.pop_back();
    }
    if(close<open){
        current.push_back(')');
        solve(open, close+1, current, ans, n);
        current.pop_back();
    }
}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current = "";
        int open = 0 ; int close = 0;
        solve(open, close, current, ans, n);
        return ans;
    }
};