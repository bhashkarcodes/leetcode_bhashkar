class Solution {
public:

    void subs(vector<int> &nums, vector<int>& ans, int idx, vector<vector<int>>& res){
        if(idx==nums.size()){ res.push_back(ans); return; }

        subs(nums, ans, idx+1, res);

        ans.push_back(nums[idx]);
        subs(nums, ans, idx+1, res);
        ans.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans; vector<vector<int>> res;

        subs(nums, ans, 0, res);

        return res;
    }
};