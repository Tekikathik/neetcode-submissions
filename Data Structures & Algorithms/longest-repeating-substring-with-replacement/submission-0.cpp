class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxfreq=0;
        int ma=INT_MIN;
        vector<int> v(26,0);
        while(i<s.size()){
            v[s[i]-'A']++;
            maxfreq=max(maxfreq,v[s[i]-'A']);
            if ((i-j+1)-maxfreq>k){
                v[s[j]-'A']--;
                j++;
            }
            ma=max(ma,i-j+1);
            i++;
        }
        return ma;

    }
};
