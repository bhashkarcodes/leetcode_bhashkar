class Solution {
public:
    static bool comparatorss(pair<char, int> p1, pair<char, int> p2){
            if(p1.second>p2.second) return true;
            else return false;
        }

    string frequencySort(string s) {
        unordered_map<char, int> m; vector<pair<char,int>> p;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        for(auto& [a,b] : m){
            p.push_back({a,b});
        }

        sort(p.begin(), p.end() ,comparatorss);
        
        string res = "";
        for(int i=0; i<p.size(); i++){
            res+=string(p[i].second, p[i].first);
        }
        return res;
    }
};