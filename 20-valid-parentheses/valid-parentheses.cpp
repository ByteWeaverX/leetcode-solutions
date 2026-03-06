class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> pairs = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char ch : s) {
            if (pairs.count(ch)) { 
                if (stk.empty() || stk.top() != pairs[ch]) return false;
                stk.pop();  
            } else {  
                stk.push(ch);
            }
        }

        return stk.empty();  
        
    }
};