class Solution {
public:
    void recursion(vector<int>& nums,vector<vector<int>>& result,int i){
        if (i==nums.size()){
            result.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            recursion(nums,result,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        recursion(nums,result,0);
        return result;
    }
};
