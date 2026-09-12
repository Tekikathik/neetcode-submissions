class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i=0;i<nums.size()-2;i++){
            if (i>0 && nums[i]==nums[i-1]) continue;
            int k=i+1;
            int m=nums.size()-1;
            while(k<m){
                int sum=nums[i]+nums[k]+nums[m];
                if (sum==0){
                    v.push_back({nums[i],nums[k],nums[m]});
                    k++;
                    m--;
                    while (k < m && nums[k] == nums[k - 1])
                        k++;
                    while (k < m && nums[m] == nums[m + 1])
                        m--;
                }
                else if (sum<0){
                    k++;
                }
                else m--;
            }
        }
        return v;
    }
};
