//2026.9.10
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (mp.find(need) != mp.end()) {
                return { i, mp[need] };
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};


/*±©Á¦½â·¨
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result = {i, j};
                    return result;
                }
            }
        }
        return result;
    }
};
*/