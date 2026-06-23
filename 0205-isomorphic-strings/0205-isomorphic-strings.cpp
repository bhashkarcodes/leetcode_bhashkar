class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char, int> m; int a=1; string p = "";
        for(int i=0; i<s.length(); i++){
            if(m.find(s[i])==m.end()) m[s[i]] = a++;
        }
        for(int i=0; i<s.length(); i++){
            p+= (char)m[s[i]];
        }
        unordered_map<char, int> n; int b=1; string q = "";
        for(int i=0; i<t.length(); i++){
            if(n.find(t[i])==n.end()) n[t[i]] = b++;
        }
        for(int i=0; i<t.length(); i++){
            q+= (char)n[t[i]];
        }
        if(p==q) return true;
        else return false;
    }
};