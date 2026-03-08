class Solution {
public:
    bool isNumber(string s) {
        bool digitSeen = false;
        bool dotSeen = false;
        bool expSeen = false;

        for(int i = 0; i < s.size(); i++) {
            char c = s[i];

            if(isdigit(c)) {
                digitSeen = true;
            }

            else if(c == '.') {
                if(dotSeen || expSeen) return false;
                dotSeen = true;
            }

            else if(c == 'e' || c == 'E') {
                if(expSeen || !digitSeen) return false;
                expSeen = true;
                digitSeen = false;
            }

            else if(c == '+' || c == '-') {
                if(i != 0 && s[i-1] != 'e' && s[i-1] != 'E')
                    return false;
            }

            else return false;
        }

        return digitSeen;
    }
};