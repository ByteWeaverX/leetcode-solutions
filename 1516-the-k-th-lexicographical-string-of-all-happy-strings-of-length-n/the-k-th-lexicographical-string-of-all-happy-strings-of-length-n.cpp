class Solution {
public:
    string ans = "";
    int count = 0;

    void backtrack(int n, int k, string curr) {
        if(curr.size() == n) {
            count++;
            if(count == k) ans = curr;
            return;
        }

        for(char c : {'a','b','c'}) {
            if(curr.empty() || curr.back() != c) {
                backtrack(n, k, curr + c);
                if(ans != "") return;
            }
        }
    }

    string getHappyString(int n, int k) {
        backtrack(n, k, "");
        return ans;
    }
};