class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int arr[26] = {0};
            for (int j = i; j < s.length(); j++) {
                arr[s[j] - 'a']++;  

                int mn = INT_MAX, mx = 0;
                for (int k = 0; k < 26; k++) {
                    if (arr[k] > 0) {
                        mn = min(mn, arr[k]);
                        mx = max(mx, arr[k]);
                    }
                }
                sum += mx - mn;
            }
        }
        return sum;
    }
};