class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++) pq.push({nums[i],i});
        int i=k;
        vector<int> v;
        v.push_back(pq.top().first);
        while(i<nums.size()){
            // v.push_back(pq.top().first);
            pq.push({nums[i],i});
            while (pq.top().second<=i-k){
                pq.pop();
            }
            pq.push({nums[i],i});
            v.push_back(pq.top().first);
            i++;
        }
        // v.push_back(pq.top().first);
        return v;
        
    }
};
