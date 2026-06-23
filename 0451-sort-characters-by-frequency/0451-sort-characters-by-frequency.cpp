class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(char p : s) m[p]++;

        vector<string> vec(s.length()+1);
        for(auto& [c,f] : m){
            vec[f]+= string(f, c);
        }

        string res = "";
        for(int i=s.length(); i>=1; i--){
            res+=vec[i];
        }
        return res;
    }
};