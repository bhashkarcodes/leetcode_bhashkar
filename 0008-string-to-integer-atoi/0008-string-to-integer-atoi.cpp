class Solution {
public:
    int myAtoi(string s) {
        bool a = false; long long res = 0; bool b = false; bool c = false; bool d = false;
        for (int i = 0; i < s.length(); i++) {
            if (!a && s[i] == ' ') continue;
            if (s[i] != ' ') a = true;
            if (!d && !c && !b && s[i] == '+') { c = true; continue; }
            if (!d && !b && !c && s[i] == '-') { b = true; continue; }
            if (!d && s[i] == '0') { d = true; continue; }
            if (s[i] >= '0' && s[i] <= '9') {
                res = res * 10 + (s[i] - '0');
                if (!b && res > INT_MAX) return INT_MAX;
                if (b && -res < INT_MIN) return INT_MIN;
                d = true;
            }
            else break;
        }
        if (b) res *= -1;
        return (int)res;
    }
};