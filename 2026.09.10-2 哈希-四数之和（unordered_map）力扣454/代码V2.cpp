//2026.9.10
class Solution {
public:
    //思路：分为nums1+nums2=s和nums3+nums4=t,用哈希表记录有多少对下标对应元素的和为同一个s，即key：s，value：个数。再遍历此哈希表，寻找-t对应的value，找到了则答案+value
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map <int, int> mp;
        int ans = 0;
        for (int i : nums1) {
            for (int j : nums2) {
                int s = i + j;
                mp[s]++;
            }
        }
        for (int i : nums3) {
            for (int j : nums4) {
                int t = i + j;
                if (mp.find(-t) != mp.end()) {
                    ans += mp[-t];
                }
            }
        }
        return ans;
    }
};