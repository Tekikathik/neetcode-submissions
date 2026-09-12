class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> & ans,vector<int>& arr,int i){
        ans.push_back(arr);
        for(int j=i;j<nums.size();j++){
            if (j>i && nums[j]==nums[j-1]) continue;
            arr.push_back(nums[j]);
            solve(nums,ans,arr,j+1);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> arr;
        sort(nums.begin(),nums.end());
        solve(nums,result,arr,0);
        return result;

    }
};
