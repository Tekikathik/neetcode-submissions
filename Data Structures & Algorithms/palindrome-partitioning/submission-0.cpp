class Solution {
public:
    bool pallindrome(string s,int i ,int j){
        while(i<j){
            if (s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(vector<vector<string>>& result,vector<string>& ss,string s,int i){
        if (i==s.size()){
            result.push_back(ss);
            return;
        }
        for (int j=i;j<s.size();j++){
            if (pallindrome(s,i,j)){
                ss.push_back(s.substr(i,j-i+1));
                solve(result,ss,s,j+1);
                ss.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        solve(ans,v,s,0);
        return ans;
        
    }
};
