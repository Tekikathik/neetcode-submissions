class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0;
        int j=0;
        vector<int> v(26,0);
        vector<int> window(26,0);
        for (int k=0;k<s1.size();k++) window[s1[k]-'a']++;
        while(i<s2.size()){
            v[s2[i]-'a']++;
            if ((i-j+1)==s1.size()){
                if (v==window) return true;
                v[s2[j]-'a']--;
                j++;
            }
            i++;
        }
        return false;
    }
};
