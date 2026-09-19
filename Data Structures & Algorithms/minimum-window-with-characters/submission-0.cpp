class Solution {
public:
    string minWindow(string s, string t) {
        int i=0;
        int j=0;
        unordered_map<char,int> mp;
        for(int k=0;k<t.size();k++) mp[t[k]]++;
        int len=INT_MAX;
        int srt=0;
        int c=t.size();
        while(i<s.size()){
            if (mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if (mp[s[i]]>=0) c--;
            }
            while(c==0){
                if (i-j+1<len){
                    len=i-j+1;
                    srt=j;
                }
                if (mp.find(s[j])!=mp.end()){
                    mp[s[j]]++;
                    if (mp[s[j]]>0) c++;
                }
                j++;
            }
            i++;
        }
        if (len==INT_MAX){
            return  "";
        }
        return s.substr(srt,len);
    }
};
