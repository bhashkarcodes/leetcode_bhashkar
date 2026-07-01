class Solution {
public:
    void subst(vector<int> & nums, int idx, vector<vector<int>>& ans, vector<int>& res, set<vector<int>>& m){
        if(idx==nums.size() && m.find(res)==m.end()){
            ans.push_back(res); m.insert(res);
            return;
        }    
        else if(idx==nums.size()) return;

        subst(nums, idx+1, ans, res, m);

        res.push_back(nums[idx]);
        subst(nums, idx+1, ans, res, m);
        res.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector<int> res;
        set<vector<int>> m;

        subst(nums, 0, ans, res, m);

        return ans;
    }
};