//2026.9.14
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) {
            return false;
        }
        unordered_map <char, int> mp;
        for (char c : magazine) {
            mp[c]++;
        }
        for (char c : ransomNote) {
            if (mp.find(c) == mp.end() || mp[c] == 0) {
                return false;
            }
            mp[c]--;
        }
        return true;
    }
};
//对于此题只有小写字母的，可以用数组哈希，更节约时间：int cnt[26] = {0};