class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        long long ma=INT_MIN;
        while(i<j){
            long long a=min(heights[i],heights[j])*(j-i);
            if (heights[i]<heights[j]) i++;
            else j--;
            ma=max(ma,a);
        }
        return ma;
        
    }
};
