class Solution {
public:
    int maxDepth(string s) {
        int count=0; int maxdp=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(') count++;
            if(s[i]==')') count--;

            maxdp=max(maxdp, count);
        }
        return maxdp;
    }
};