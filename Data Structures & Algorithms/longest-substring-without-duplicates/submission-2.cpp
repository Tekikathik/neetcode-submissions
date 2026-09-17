class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int ma=INT_MIN;
        int i=0,j=0;
        while(i<s.size()){
            while(mp[s[i]]>0){
                mp[s[j]]--;
                j++;
            }
            mp[s[i]]++;
            ma=max(ma,i-j+1);
            i++;
        }
        if (ma==INT_MIN) return 0;
        return ma;
    }
};
