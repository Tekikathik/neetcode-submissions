class Solution {
public:
    void solve(vector<vector<int>>& result,vector<int>& nums,vector<int>& arr,int target,int i){
        if(target==0){
            result.push_back(arr);
            return;
        }
        if (i==nums.size())return ;
        for(int j=i;j<nums.size();j++){
            if (j>i && nums[j]==nums[j-1]) continue;
            if (nums[j]<=target){
                arr.push_back(nums[j]);
                solve(result,nums,arr,target-nums[j],j+1);
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> arr;
        vector<vector<int>> result;
        sort(candidates.begin(),candidates.end());
        solve(result,candidates,arr,target,0);
        return result;
    }
};
